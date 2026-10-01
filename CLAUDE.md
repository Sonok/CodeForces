# Codeforces practice repo

Owner is rated ~1150, target 1400 by 2026-12-31. One timed problem a day.

## Layout
- `0-1000/` archive. Jumbled on purpose. Never reorganize or categorize it.
- `1000-1400/` active work. One folder per skill (greedy, two_pointers, binary_search, prefix_sums,
  constructive, number_theory, dp, graphs, dsu, trees, bitmasks, strings, games).
  Each has a README with patterns, formulas, pitfalls, a plan, and a log table.
  `1000-1400/README.md` is the index and the overall contest log.
- `templates/starter.cpp` is the template for every new file.

## Conventions
- New problem file: `1000-1400/<skill>/<contest><letter>_<Name>.cpp`. Statement in a `/* */` block
  on top, then the compile-line comment, then the template.
- Only problems from 2024 or later (contest id 1917+). Older problems are under-rated today.
- After a problem is solved: tick it in the skill README plan, add a row to the skill log and the
  index contest log (date, time taken, result, one-line lesson).
- Compile: `g++ -std=gnu++17 -O2 X.cpp -o main && ./main`. Mac clang has no `bits/stdc++.h`.
- Do not commit unless asked.
- Codeforces blocks automated fetching. Write statements from knowledge and tell the user to verify
  samples on the site.

## Agents (`.claude/agents/`)
- `coach`: graded hints, never the full solution unless asked.
- `stress-test`: brute-force verification of a solution against random small inputs.
