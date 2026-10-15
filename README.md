# Codeforces Practice Repository

**Current Rating:** ~1150 (2026-10-14)
**Contests Completed:** 7
**Problems Solved:** 99 / 200 goal

So far I’ve only had time to compete in **Div 2 contests**. At this level, rating does not move much unless you consistently solve **A–C**, so the focus right now is speed, pattern recognition, and execution.

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

## Where I am (2026-10-14)

Per-skill estimate from the 1000-1400 logs. One or two problems per row so far, so low confidence.
Full log and the rule for updating this lives in [1000-1400/README.md](1000-1400/README.md).

| Skill | Solved | Est. | Confidence | Evidence |
|---|---|---|---|---|
| [greedy](1000-1400/greedy/) | 2 | ~1100 | low | 1200 and 1000, both with hints, 50-60 min each. Finds the greedy, loses time to implementation slips |
| [prefix_sums](1000-1400/prefix_sums/) | 2 | ~1200 | medium | 1300 with hints in 75 min, 1200 solo first try. Strongest area so far |
| [number_theory](1000-1400/number_theory/) | 2 | ~1150 | medium | 1200 solo (residue pairs), 1200 with a direction hint (reverse processing) |
| [binary_search](1000-1400/binary_search/) | 1 | ~1100 | low | 1100 solo, idea immediate, lost the rest to double vs long long |
| [graphs](1000-1400/graphs/) | 1 | ~1150 | low | 1200 BFS with vague hints |
| [dsu](1000-1400/dsu/) | 1 | ~1050 | low | 1100 with hints, needed the cycle-decomposition idea |
| [bitmasks](1000-1400/bitmasks/) | 1 | ~1050 | low | 1100 with hints, picked AND where OR was needed |
| [two_pointers](1000-1400/two_pointers/) | 0 | ? | none | |
| [constructive](1000-1400/constructive/) | 0 | ? | none | |
| [dp](1000-1400/dp/) | 0 | ? | none | |
| [trees](1000-1400/trees/) | 0 | ? | none | |
| [strings](1000-1400/strings/) | 0 | ? | none | |
| [games](1000-1400/games/) | 0 | ? | none | |

Pattern across all of it: ideas at 1100-1200 come either solo or after one nudge, so the ceiling is not
the algorithm yet. Time goes to implementation: off-by-ones, overflow, wrong operator, stale loop
variables. Recording the time on every solve is the single biggest gap in this table.

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
