\literate[Inlining]

% Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

\begin{code}
module inlining
imports strategy stratlib lib stratego-laws rename-defs
\end{code}

  \paragraph{Inlining with Definition Environment}

	The inlining strategy uses an environment with all
	the defininitions to be inlined and distributes it over
	the other definitions, substituting bodies for calls to
	operators.

	Heuristics for inlining: inline all operators with arguments.
	Also nullary operators that represent rules (do a match as
	first action).

\begin{code}
overlays

  dont-inline = []

  // create a user-definable list of function that should not and/or functions
  // that should be inlined.

strategies

  inline-strategies = 
    Specification([id,Strategies(inline-sdefs)])

  inline-sdefs = 
    map(simplify0; try(inlineable; AddSDef));
    map(inline-sdef)

  inline-sdef =
    rec x({| InlineCall :
             (UndefineSDef <+ repeat(InlineCall));
	     all(x)
          |})

  UndefineSDef =
    ?SDef(f,_,_);
    rules(
      InlineCall :
        Call(SVar(f), ss) -> Undefined
    )

  AddSDef =
    ?sdef@SDef(f, _, _);
    rules(
      InlineCall : 
        Call(SVar(f), ss) -> s'
        where <strename> sdef => SDef(f, xs, s)
            ; <substitute-args> (xs, ss, s) => s'
            ; rules(InlineCall : Call(SVar(f), _) -> Undefined)
	    //; <debug(!"Inlining: ")> f

      InlineCall : 
        Call(SVar(f), []) -> Let([SDef(g, xs, s)],Call(SVar(g),[]))
        where <strename> sdef => SDef(f, xs@[_|_], s)
            ; new => g
            ; rules(InlineCall : Call(SVar(f), _) -> Undefined)
	    //; <debug(!"Inlining: ")> f
    )

  substitute-args = 
    {| SubsArgCall1, SubsArgCall2 :
       ?(xs, ss, s)
       ; <zip(substitute-arg)> (xs, ss)
       ; <topdown(try(SubsArgCall1 + SubsArgCall2))> s
    |}

  substitute-arg =
    ?(VarDec(x, FunType([_],_)), s);
    rules(SubsArgCall1 : Call(SVar(x), []) -> <strename> s)

  substitute-arg =
    ?(VarDec(x, FunType([_,_|_],_)), Call(SVar(y),[]));
    rules(SubsArgCall2 : Call(SVar(x), ss) -> Call(SVar(y), ss))

  inlineable = 
    //debug(!"inlineable?: ");
    SDef(not("main_0"); ?f, id, where(not(oncetd(?Call(SVar(f),[])))); body-to-inline)
    // ; where(<not(fetch(?f))> dont-inline)
    // ; where(<debug(!"inlineable: ")> f )

  body-to-inline = 
    rec x(
        Id
	+ Fail
	+ Call(SVar(id),id)
	+ Build(id)
	+ Match(id)
	+ Seq(Match(id), id)
	+ Scope(id, Match(id))
	+ Scope(id, Seq(Match(id), id))
	+ Seq(Scope(id, Seq(Match(id), id)), id)
	+ Cong(id,id)
	+ Choice(x, x)
	+ LChoice(x, x)
    );
    where(split(term-size, !10); leq)

  term-size =
    rec x(crush(!1,add,x))

\end{code} 
