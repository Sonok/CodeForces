# Greedy

Status: in progress (4 of 9 done)

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
4. [x] [1976B Increase/Decrease/Copy](https://codeforces.com/problemset/problem/1976/B) (1200) — forced per-element cost plus the cheapest copy source
5. [ ] [1945D Seraphim the Owl](https://codeforces.com/problemset/problem/1945/D) (1300)
6. [ ] [2050D Digital string maximization](https://codeforces.com/problemset/problem/2050/D) (1300)
7. [ ] [2037D Sharky Surfing](https://codeforces.com/problemset/problem/2037/D) (1500, stretch: greedy + priority queue)
8. [x] [1955C Inhabitant of the Deep Sea](https://codeforces.com/problemset/problem/1955/C) (1300) — independent ends, count totals instead of simulating
9. [x] [2022B Kar Salesman](https://codeforces.com/problemset/problem/2022/B) (1300) — answer is the max of two lower bounds
10. [x] [1989C Two Movies](https://codeforces.com/problemset/problem/1989/C) (1400) — forced choices first, postponed ties handed out at the end

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
| 2026-09-30 | 1921D Very Different Array | 60+ min | solved with hints | first idea was per-element pick-the-better-end, which steals. Had the two-prefix idea early, bug was which b index each group used. |
| 2026-10-01 | 1921C Sending Messages | 50+ min | accepted, with hints | Greedy was right in 10 min. Lost 40 min to two non-algorithm bugs: missed that the phone is on from moment 0 so the first gap is [0, m1], then int overflow on a*gap, then tried to dodge overflow with float which lost precision. Read the statement twice, long long on any product of inputs. |
| 2026-11-13 | 1955C Inhabitant of the Deep Sea | ~87 min | accepted, with 4 hints (1 WA, 1 RE) | Simulated the alternation pair by pair and drowned in cases (5 -> 3,2). Saw alone that left gets ceil(k/2) and right gets floor(k/2), but did not trust that the totals are all that matter. Left attacks only touch the left end, right only the right, so walk each side on its own budget. The sides only mix on the one ship where the walks meet: carry the partial damage over and cap the answer at n. Also k up to 1e15 needs long long. |
| 2026-11-14 | 2022B Kar Salesman | ~45 min | accepted after seeing the full solution | Tried heaps to build the assignment. Found both lower bounds alone once asked what forces the count up (biggest model; ceil(total / x)) but read them as a binary search range, not as the answer. The gap is trusting that the larger bound is always reachable: deal cars model by model around a circle of m customers. Evidence in a contest: bound matches every sample, cannot build a tiny counterexample, constraints too big to construct anything. Also ceil returns double, so max(double, ll) will not compile; use (a + b - 1) / b. |
| 2026-11-15 | 1976B Increase/Decrease/Copy | not recorded (under ~75 min) | accepted, idea found alone, no hints | Clean solo solve. Saw that every a[i] must walk to b[i] anyway, so that cost is fixed, and the copy can be taken at any value the walk passes through: free if the last b lies between a[i] and b[i], otherwise pay the distance from the nearest endpoint, plus 1 for the copy. Used long long for the total. Only style note: the solution sits in main instead of solve(). |
| 2026-11-19 | 1989C Two Movies | 60+ min | accepted, with 4 hints | Saw alone that each person is independent and wrote the nine cases, but decided every person at the moment of meeting them, so (-1,-1) and (1,1) had no right tie-break. Named the problem exactly ('which one do you pick?') but did not see that the choice can wait. Fix in two steps: when a[i] != b[i] the better movie is right whatever the scores are, so do those first; count the (1,1) and (-1,-1) people. Then tried one net tie counter, which lets a liked-both and a disliked-both cancel; A = 5, B = 0 with one of each shows that is worse than -1 to A and +1 to B. Keep two counters and give them out one at a time. Own review after: the fourth sample is what exposed the tie problem, and since there are only n ties a loop is enough, no formula. Lesson: if the order of the input is not part of the problem, the order of decisions is mine to pick; do the forced ones first. |
