[
   Note                    -- KW["note"],
   Warn                    -- KW["warning"],
   Err                     -- KW["error"],
   Fail                    -- KW["fails"],
   Succ                    -- KW["succeeds"],
   Mult                    -- KW["has"] KW["multiple"] KW["results"],
   Msg                     -- KW["show"] _1 _2 KW["on"] _3 KW["when"] _4 _5,
   Choice                  -- V  [H  [KW["choose"]] _1],
   Choice.1:iter-star-sep  -- _1 KW["<+"],
   Concat                  -- V  [H  [KW["concat"]] _1],
   Concat.1:iter-star-sep  -- _1 KW["+"],
   PropCalc                -- KW["produce"] _1,
   PropLookup              -- KW["lookup"] KW["property"] _1 KW["on"] _2,
   Rewrite                 -- KW["rewrite"] _1 KW["using"] KW["relation"] _2,
   Match                   -- KW["match"] _1 KW["using"] KW["relation"] _2 KW["with"] KW["bindings"] _3,
   ResolveDefs             -- KW["resolve"] KW["definition"] _1 _2 KW["in"] _3,
   ResolveNamedImports     -- KW["resolve"] KW["import"] _1 _2 KW["in"] _3,
   DisambiguateDefs        -- KW["disambiguate"] KW["definitions"] _1,
   COMPLETION-MsgType      -- _1,
   COMPLETION-MsgTrigger   -- _1,
   COMPLETION-Instruction  -- _1,
   Id                      -- _1 KW[":"] _2,
   Id                      -- _1 KW[":"] _2 KW["#"] _3,
   Anon                    -- KW["anon"] _1,
   Subsq                   -- KW["subsq"] _1,
   COMPLETION-URI          -- _1,
   COMPLETION-Segment      -- _1,
   Tupl                    -- KW["("] _1 KW[")"],
   Appl                    -- _1 KW["("] _2 KW[")"],
   List                    -- KW["["] _1 KW["]"],
   Str                     -- _1,
   Int                     -- _1,
   Real                    -- _1,
   Anno                    -- _1 KW["{"] _2 KW["}"],
   COMPLETION-Term         -- _1,
   COMPLETION-Terms        -- _1,
   Tasks                   -- _1,
   Tasks.1:iter-star       -- _1,
   TaskDef                 -- KW["task"] _1 KW["["] _2 KW["]"] KW["="] _3 KW["-"] KW[">"] _4,
   TaskDef.2:iter-star-sep -- _1 KW[","],
   TaskRef                 -- _1,
   Fail                    -- KW["fail"],
   Empty                   -- KW["_"],
   TaskRef                 -- KW["&"] _1,
   URI                     -- KW["/"] _1 KW["/"],
   COMPLETION-Tasks        -- _1,
   COMPLETION-TaskDef      -- _1,
   COMPLETION-TaskRef      -- _1,
   COMPLETION-Instruction  -- _1,
   COMPLETION-Result       -- _1,
   COMPLETION-Term         -- _1
]