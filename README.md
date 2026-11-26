# Codeforces Practice Repository

**Current Rating:** 1110 (after Round 1108, 2026-07-12)
**Contests Completed:** 11
**Problems Solved:** 123 / 200 goal (2026-11-26)

So far I’ve competed in 11 rated rounds, mostly **Div 2**, with a few Div 3 and one Div 4. At this level, rating does not move much unless you consistently solve **A–C**, so the focus right now is speed, pattern recognition, and execution.

I’m treating competitive programming like a real class:

* Show up consistently
* Attempt every problem during contests
* Try to solve everything, even if it feels hard
* Internalize patterns through repetition

Progress is not linear. Consistency compounds.

---

## Contest Strategy

### Day of Competition

* Caffeine
* Water
* Clear head
* No overthinking

### During Contest

* Start with **A immediately**. It is usually the most intuitive solution.
* Look at constraints before coding.
* Do what is easiest first.
* Speed matters more right now than over-optimizing.
* TLEs are usually a later-stage issue. Implementation speed is the priority.

The goal right now is building instincts and solving faster under pressure.

---

## Contest history

| # | Contest | Date | Rank | Solved | Change | Rating |
|---|---|---|---|---|---|---|
| 11 | Codeforces Round 1108 (Div. 2) | 2026-07-12 | 9291 | 2 | -45 | 1110 |
| 10 | Codeforces Round 1096 (Div. 3) | 2026-04-30 | 3977 | 4 | +41 | 1155 |
| 9 | Educational Codeforces Round 189 (Rated for Div. 2) | 2026-04-21 | 8355 | 2 | -41 | 1114 |
| 8 | Codeforces Round 1086 (Div. 2) | 2026-03-14 | 7078 | 2 | 0 | 1155 |
| 7 | Codeforces Round 1083 (Div. 2) | 2026-02-26 | 3564 | 3 | +83 | 1155 |
| 6 | Codeforces Round 1081 (Div. 2) | 2026-02-21 | 8342 | 2 | +33 | 1072 |
| 5 | Codeforces Round 1080 (Div. 3) | 2026-02-15 | 15376 | 2 | +33 | 1039 |
| 4 | Codeforces Round 1077 (Div. 2) | 2026-01-29 | 11595 | 2 | +107 | 1006 |
| 3 | Codeforces Round 1076 (Div. 3) | 2026-01-25 | 8984 | 4 | +245 | 899 |
| 2 | Codeforces Round 1074 (Div. 4) | 2026-01-18 | 14559 | 3 | +263 | 654 |
| 1 | Hello 2026 | 2026-01-07 | 16293 | 1 | +391 | 391 |

---

## Where I am (2026-11-26)

Per-skill estimate from the 1000-1400 logs. Rows with three or more problems are fair estimates,
the rest are a first guess.
Full log and the rule for updating this lives in [1000-1400/README.md](1000-1400/README.md).

| Skill | Solved | Est. | Confidence | Evidence |
|---|---|---|---|---|
| [greedy](1000-1400/greedy/) | 7 | ~1200 | low | 1200 and 1000 with hints at 50-60 min, two 1300s with heavy help, a 1200 solo with no hints, a 1400 with four hints, a 1200 observation problem with four hints. Finds the greedy direction alone, needs help when a choice must be postponed |
| [prefix_sums](1000-1400/prefix_sums/) | 4 | ~1300 | medium | 1300 with hints in 75 min, 1200 solo first try, 1300 solo with no hints in 38 min, 1400 needed about ten hints. Solid at 1300, not yet at 1400 |
| [number_theory](1000-1400/number_theory/) | 7 | ~1250 | medium | 1200 solo (residue pairs), 1200 with a direction hint (reverse processing), 1300 idea solo in ~55 min with hints only on a floating-point bug, 1400 counting problem with five small hints, 1200 divisor brute force solo with nudges on three slips, 1400 counting problem solo with no idea hints, 1200 digit-sum problem solo |
| [binary_search](1000-1400/binary_search/) | 3 | ~1150 | low | 1100 solo, idea immediate, lost the rest to double vs long long; 1400 idea solo with hints on bugs; 1200 idea solo (lower_bound on sorted positions), three vague hints on slips |
| [graphs](1000-1400/graphs/) | 2 | ~1200 | low | 1200 BFS with vague hints; 1400 permutation-cycle problem where the cost formula came alone after two nudges (draw the cycle, try one swap), code written alone |
| [dsu](1000-1400/dsu/) | 1 | ~1050 | low | 1100 with hints, needed the cycle-decomposition idea |
| [bitmasks](1000-1400/bitmasks/) | 1 | ~1050 | low | 1100 with hints, picked AND where OR was needed |
| [two_pointers](1000-1400/two_pointers/) | 3 | ~1300 | medium | 1300 in 35 min (only block was a misread), 1200 window idea solo in ~37 min with vague hints on a bug, 1300 window solo with one tiny hint |
| [constructive](1000-1400/constructive/) | 2 | ~1200 | low | 1100 solo, construction found fast, missed the n=2 edge case; 1400 bitwise construction where the general case came alone and the power-of-two edge cases needed about five nudges |
| [dp](1000-1400/dp/) | 3 | ~1250 | low | one 1200 with several hints, then a 1300 fully solo in about 33 min (track the max and the min state), then a 1300 where the O(n^2) dp came alone and one hint turned it into O(n) |
| [trees](1000-1400/trees/) | 0 | ? | none | |
| [strings](1000-1400/strings/) | 1 | ~1050 | low | 1100 with a hint (local recount around a point update), 40-50 min |
| [games](1000-1400/games/) | 0 | ? | none | |

Pattern across all of it (2026-11-26, 35 problems logged since the restart, 34 solved): ideas at 1200-1300 now
usually come solo or after one nudge, and the code follows quickly. At 1400 the block is the key
observation, or trusting it: believing a greedy is safe, seeing that a swap splits a cycle, spotting
which terms of a dp leave the inner loop. Drawing a small case by hand is what unlocks those. Slips
still cost time on most problems: off-by-ones, wrong index, operator precedence, a missing brace,
arguments in the wrong order. Most solves still have no time recorded.

---

## Purpose

* Build strong problem-solving intuition
* Improve rating through consistent volume
* Increase implementation speed
* Get comfortable solving under contest pressure

Right now the priority is simple:
Solve faster. Recognize patterns sooner. Keep showing up.


---

## Restart (Sept 2026)

* `0-1000/` — archive. Everything up to the restart, left as is. It got me to 1000+.
* `1000-1400/` — current work, one folder per skill. Each skill has a README with the patterns,
  formulas, pitfalls, a plan of 2024+ problems, and a log. The index README has the contest log.
* `.claude/agents/` — `coach` (hints only) and `stress-test` (brute-force verification).
* Target: 1400 by end of 2026.
