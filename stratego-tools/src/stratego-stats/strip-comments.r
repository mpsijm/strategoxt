\literate[strip-comments]
% Copyright (C) 2002 Merijn de Jonge <mdejonge@cwi.nl>
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

% $Id: strip-comments.r,v 1.1 2002/06/05 21:06:40 mdejonge Exp $


Strip comments from parsed stratego program.

usage:

parse -l stratego -i <prog.r> \
  | implode-asfix --lex \
  | strip-comments \
  | asfix2abox -c \
  | abox2text

\begin{code}
module rmlayout

imports lib

signature
   constructors
      layout : String -> Layout

strategies
strip-comments = 
   iowrap(topdown(try(StripComments)))

StripComments: 
   layout(xs) -> layout(["\n"])
   where
    !xs;
    concat-strings;
    explode-string;
    filter( not(9);not(10); not(32) );
    not([])
\end{code}
