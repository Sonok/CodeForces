# Greedy

Status: in progress (2 of 7 done)

## What it is
Make the locally best choice at each step and prove nothing better exists.
At 1000 to 1400 nearly every greedy is "sort by the right key, then sweep once".

## Patterns and formulas
- **Sort then sweep.** Decide the key first (value, deadline, ratio, end time). If you can't say why that key, you don't have a greedy yet.
- **Exchange argument.** Take any optimal answer, swap two adjacent choices to match the greedy order, show the total doesn't get worse. If this works, greedy is correct.
- **Split point.** Sorted a and sorted b: the k smallest of a go with one end of b, the rest go with the other end. Answer is `max over k` of `pre_high[k] + (pre_low[n] - pre_low[k])`. (1921D)
- **Take the cheapest first** when the cost per unit is constant: coins, exams, tickets.
- **Earliest deadline / earliest finish** for scheduling intervals.
- **Pairing extremes.** To maximize sum of |a_i - b_i| pair small with large. To minimize, pair sorted with sorted.

**Learn:** [USACO Guide: Greedy with Sorting](https://usaco.guide/silver/greedy-sorting)

## Pitfalls
- "Best for this element now" is not greedy. Ask: can this choice steal something a later element needs more? If yes, look for a global structure (split point, sort both).
- Ties. Decide the tie-break rule before coding.
- Prove it on a 3-element case by hand before writing code. Takes 2 minutes, saves 40.

## Plan
1. [x] [1921D Very Different Array](https://codeforces.com/problemset/problem/1921/D) (1200) — split point over sorted arrays
2. [x] [1921C Sending Messages](https://codeforces.com/problemset/problem/1921/C) (1000) — target 25 min
3. [ ] [2004C Splitting Items](https://codeforces.com/problemset/problem/2004/C) (1200)
4. [ ] [1976B Increase/Decrease/Copy](https://codeforces.com/problemset/problem/1976/B) (1200)
5. [ ] [1945D Seraphim the Owl](https://codeforces.com/problemset/problem/1945/D) (1300)
6. [ ] [2050D Digital string maximization](https://codeforces.com/problemset/problem/2050/D) (1300)
7. [ ] [2037D Sharky Surfing](https://codeforces.com/problemset/problem/2037/D) (1500, stretch: greedy + priority queue)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
| 2026-09-30 | 1921D Very Different Array | 60+ min | solved with hints | first idea was per-element pick-the-better-end, which steals. Had the two-prefix idea early, bug was which b index each group used. |
| 2026-10-01 | 1921C Sending Messages | 50+ min | accepted, with hints | Greedy was right in 10 min. Lost 40 min to two non-algorithm bugs: missed that the phone is on from moment 0 so the first gap is [0, m1], then int overflow on a*gap, then tried to dodge overflow with float which lost precision. Read the statement twice, long long on any product of inputs. |
