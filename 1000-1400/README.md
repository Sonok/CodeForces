# 1000 -> 1400

Goal: 1400 by 2026-12-31. Rating at restart (2026-09-30): ~1150.
`../0-1000/` is the archive. It got me to 1000+, it stays jumbled, we don't look at it.

## How this works
- One timed problem a day. Every problem goes in the folder of the skill it tested,
  named `<contest><letter>_<Name>.cpp`, statement in a comment on top.
- Each skill folder has a README: what the skill is, the patterns and formulas, the
  pitfalls, a plan of problems in order, and a log of what I solved and what went wrong.
- After each problem, log it in the skill README and in the table below.
- The skill with the most misses or slowest times becomes the next study block.
- A skill is done when I solve a 1400 of that type in under 30 minutes without hints.

Problems are from 2024 and later only (contest id 1917+). Older problems are under-rated by today's
standards, so they don't count. Ratings listed are approximate.

## Skills

| Tier | Skill | Status | Folder |
|---|---|---|---|
| 1 | Greedy | in progress | [greedy](greedy/) |
| 1 | Two pointers / sliding window | not started | [two_pointers](two_pointers/) |
| 1 | Binary search (on answer) | not started | [binary_search](binary_search/) |
| 1 | Prefix sums / difference arrays | not started | [prefix_sums](prefix_sums/) |
| 1 | Constructive | not started | [constructive](constructive/) |
| 1 | Number theory | not started | [number_theory](number_theory/) |
| 2 | DP | not started | [dp](dp/) |
| 2 | Graphs: BFS / DFS / grids | not started | [graphs](graphs/) |
| 2 | DSU | not started | [dsu](dsu/) |
| 2 | Trees | not started | [trees](trees/) |
| 2 | Bitmasks | not started | [bitmasks](bitmasks/) |
| 2 | Strings | not started | [strings](strings/) |
| 2 | Games | not started | [games](games/) |

Tier 1 is what Div 3 C and D test. Tier 2 is what E and F test, and what separates 1300 from 1400.

## Where to find problems
- [Codeforces problemset filtered 1000–1400](https://codeforces.com/problemset?tags=1000-1400) — sort by contest id descending and only take 1917+.
- [Div 3 and Div 4 contest list](https://codeforces.com/contests/page/1) — virtual-participate a 2024+ round when you want a timed set.
- [Codeforces problem ratings by tag](https://codeforces.com/problemset?tags=greedy,1000-1400) — swap the tag for the skill you're on.

## Contest log

| Date | Problem | Rating | Skill | Time | Result | One-line lesson |
|---|---|---|---|---|---|---|
| 2026-09-30 | [1921D Very Different Array](https://codeforces.com/problemset/problem/1921/D) | 1200 | greedy | 60+ min | solved with hints | per-element greedy steals; sort both, try every split k with prefix sums |

## Helpers
- `claude` agents in `../.claude/agents/`: `coach` gives graded hints without the answer,
  `stress-test` brute-forces my solution on random inputs and finds a failing case.
- Compile: `g++ -std=gnu++17 -O2 X.cpp -o main && ./main` (no `bits/stdc++.h` on Mac clang).
