# 1000 -> 1400

Goal: 1400 by 2026-12-31. Rating at restart (2026-09-30): ~1150.
Problem count goal: 200 solved on Codeforces (per profile, not file count). **Progress: 99 / 200** as of 2026-10-14.
`../0-1000/` is the archive. It got me to 1000+, it stays jumbled, we don't look at it.

## How this works
- One timed problem a day. A new problem lands in `inbox/` with no topic given, so I solve it
  blind like in a contest. After it's solved it moves to the folder of the skill it tested,
  named `<contest><letter>_<Name>.cpp`, statement in a comment on top.
- Each skill folder has a README: what the skill is, the patterns and formulas, the
  pitfalls, a plan of problems in order, and a log of what I solved and what went wrong.
- After each problem, log it in the skill README and in the table below, and nudge that skill's row in the estimates table.
- The skill with the most misses or slowest times becomes the next study block.
- A skill is done when I solve a 1400 of that type in under 30 minutes without hints.

Problems are from 2024 and later only (contest id 1917+). Older problems are under-rated by today's
standards, so they don't count. Ratings listed are approximate.

## Skill estimates

Rough rating per skill, updated after every solve. "Solo" means the idea was found without hints.
Most rows rest on one or two problems, so treat them as a first guess, not a verdict.
Overall rating ~1150 as of 2026-10-14.

| Skill | Solved | Est. | Confidence | Evidence |
|---|---|---|---|---|
| [greedy](greedy/) | 2 | ~1100 | low | 1200 and 1000, both with hints, 50-60 min each. Finds the greedy, loses time to implementation slips |
| [prefix_sums](prefix_sums/) | 2 | ~1200 | medium | 1300 with hints in 75 min, 1200 solo first try. Strongest area so far |
| [number_theory](number_theory/) | 2 | ~1150 | medium | 1200 solo (residue pairs), 1200 with a direction hint (reverse processing) |
| [binary_search](binary_search/) | 1 | ~1100 | low | 1100 solo, idea immediate, lost the rest to double vs long long |
| [graphs](graphs/) | 1 | ~1150 | low | 1200 BFS with vague hints |
| [dsu](dsu/) | 1 | ~1050 | low | 1100 with hints, needed the cycle-decomposition idea |
| [bitmasks](bitmasks/) | 1 | ~1050 | low | 1100 with hints, picked AND where OR was needed |
| [two_pointers](two_pointers/) | 0 | ? | none | |
| [constructive](constructive/) | 0 | ? | none | |
| [dp](dp/) | 0 | ? | none | |
| [trees](trees/) | 0 | ? | none | |
| [strings](strings/) | 0 | ? | none | |
| [games](games/) | 0 | ? | none | |

Pattern across all of it: ideas at 1100-1200 come either solo or after one nudge, so the ceiling is not
the algorithm yet. Time goes to implementation: off-by-ones, overflow, wrong operator, stale loop
variables. Recording the time on every solve is the single biggest gap in this table.

## Where to find problems
- [Codeforces problemset filtered 1000–1400](https://codeforces.com/problemset?tags=1000-1400) — sort by contest id descending and only take 1917+.
- [Div 3 and Div 4 contest list](https://codeforces.com/contests/page/1) — virtual-participate a 2024+ round when you want a timed set.
- [Codeforces problem ratings by tag](https://codeforces.com/problemset?tags=greedy,1000-1400) — swap the tag for the skill you're on.

## Helpers
- `claude` agents in `../.claude/agents/`: `coach` gives graded hints without the answer,
  `stress-test` brute-forces my solution on random inputs and finds a failing case.
- Compile: `g++ -std=gnu++17 -O2 X.cpp -o main && ./main` (no `bits/stdc++.h` on Mac clang).

## Contest log

| Date | Problem | Rating | Skill | Time | Result | One-line lesson |
|---|---|---|---|---|---|---|
| 2026-09-30 | [1921D Very Different Array](https://codeforces.com/problemset/problem/1921/D) | 1200 | greedy | 60+ min | solved with hints | per-element greedy steals; sort both, try every split k with prefix sums |
| 2026-10-01 | [1921C Sending Messages](https://codeforces.com/problemset/problem/1921/C) | 1000 | greedy | 50+ min | accepted with hints | algorithm fast, lost 40 min to misreading start time, int overflow, then float precision |
| 2026-10-09 | [1996C Sort](https://codeforces.com/problemset/problem/1996/C) | 1300 | prefix_sums | ~75 min | accepted with hints | range only matters as a multiset of letters; 26 prefix-count arrays, carry every row forward each step |
| 2026-10-10 | [1931D Divisible Pairs](https://codeforces.com/problemset/problem/1931/D) | 1200 | number_theory | not recorded | accepted | reduce each element to its residue pair, then count partners with a map in one pass |
| 2026-10-11 | [1945C Left and Right Houses](https://codeforces.com/problemset/problem/1945/C) | 1200 | prefix_sums | not recorded | accepted, idea found alone | algorithm right first try; three small slips (off-by-one on the right count, seeding best from a char, integer n/2) |
| 2026-10-12 | [1948C Arrow Path](https://codeforces.com/problemset/problem/1948/C) | 1200 | graphs | not recorded | accepted with vague hints | BFS where one second is one edge; a backward search must reverse the move rule, not just the start cell |
| 2026-10-12 | [2008D Sakurako's Hobby](https://codeforces.com/problemset/problem/2008/D) | 1100 | dsu | not recorded | accepted with hints | permutation = disjoint cycles (in = out = 1); per-set data lives at the DSU root, never walk the parent chain to collect it |
| 2026-10-14 | [1971E Find the Car](https://codeforces.com/problemset/problem/1971/E) | 1100 | binary_search | not recorded | accepted, idea found alone | overflow means promote to `long long` (`1LL * x * y`), never switch to `double`; floor of an exact integer in double truncates to n-1 |
| 2026-10-14 | [1932C LR-remainders](https://codeforces.com/problemset/problem/1932/C) | 1200 | number_theory | not recorded | accepted with hints | cannot divide mod a composite m; when removals are the obstacle, process the operations in reverse so they become insertions |
| 2026-10-14 | [1991B AND Reconstruction](https://codeforces.com/problemset/problem/1991/B) | 1100 | bitmasks | not recorded | accepted with hints | "must contain all bits of both" is OR, not AND; build the candidate, then verify it by recomputing b directly |
