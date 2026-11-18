# DP

Status: in progress (1 done)

## What it is
Break the problem into states, each state's answer depends on smaller states. Write the state in one sentence, write the transition, write the base case, fill in order.

## Patterns and formulas
- **1D.** `dp[i]` = best answer using the first i elements. `dp[i] = max(dp[i-1] + ..., ...)`.
- **Knapsack / coin change.** `dp[s]` = can we make sum s. `for item: for s from high to low: dp[s] |= dp[s - item]` (0/1) or low to high (unlimited).
- **Count ways.** Same as knapsack but add instead of or, mod 1e9+7.
- **Grid paths.** `dp[i][j] = dp[i-1][j] + dp[i][j-1]`.
- **Pick or skip** with a state for the previous pick: `dp[i][took_prev]`.
- **Longest increasing subsequence** O(n log n) with lower_bound on a tails array.
- **Prefix-sum DP** when the transition sums over a range: keep a running prefix of dp.

**Learn:** [USACO Guide: Intro to DP](https://usaco.guide/gold/intro-dp), [Knapsack](https://usaco.guide/gold/knapsack)

## Pitfalls
- Write the state definition in words before any code. Most bugs are a fuzzy state.
- Init with -INF / INF / 0 deliberately, don't rely on zero-fill.
- Watch order: the states you depend on must be filled already.
- Memory: 2D of 1e4 x 1e4 ints is 400 MB. Roll the array if only the previous row is needed.

## Plan
1. [x] [1948C Arrow Path](https://codeforces.com/problemset/problem/1948/C) (1200, grid) — solved 2026-10-12 with BFS, filed in [graphs](../graphs/)
2. [ ] [1941D Rudolf and the Ball Game](https://codeforces.com/problemset/problem/1941/D) (1300)
3. [ ] [2033C Sakurako's Field Trip](https://codeforces.com/problemset/problem/2033/C) (1400)
4. [ ] [2050E Three Strings](https://codeforces.com/problemset/problem/2050/E) (1500)
5. [ ] [1941E Rudolf and k Bridges](https://codeforces.com/problemset/problem/1941/E) (1600, stretch)
6. [x] [1987C Basil's Garden](https://codeforces.com/problemset/problem/1987/C) (1200) — finish time from the right, max of two lower bounds
7. [ ] [1992D Test of Love](https://codeforces.com/problemset/problem/1992/D) (1200) — tags seen 2026-11-18 (dp, greedy), not blind anymore; file is set up in this folder

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
| 2026-11-14 | [1987C Basil's Garden](https://codeforces.com/problemset/problem/1987/C) (1200) | ~1 hour | accepted, with several hints | Right-to-left finish-time dp found alone, and the stuck case (neighbour's finish + 1) was right from the start. The slip was branching on starting heights h[i] vs h[i+1]: the neighbour's height keeps changing, only its finish time matters. A flower is either never held up (takes h[i]) or stuck behind its neighbour (takes dp[i+1] + 1); both are lower bounds, so dp[i] = max of the two, no branches. A hand trace with an error in it hid the bug, so trace slowly. |
