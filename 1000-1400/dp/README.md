# DP

Status: not started

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
1. [ ] [1948C Arrow Path](https://codeforces.com/problemset/problem/1948/C) (1200, grid)
2. [ ] [1941D Rudolf and the Ball Game](https://codeforces.com/problemset/problem/1941/D) (1300)
3. [ ] [2033C Sakurako's Field Trip](https://codeforces.com/problemset/problem/2033/C) (1400)
4. [ ] [2050E Three Strings](https://codeforces.com/problemset/problem/2050/E) (1500)
5. [ ] [1941E Rudolf and k Bridges](https://codeforces.com/problemset/problem/1941/E) (1600, stretch)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
