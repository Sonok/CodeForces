# Prefix sums / difference arrays

Status: not started

## What it is
Precompute running totals so any range query is O(1). Difference arrays do the reverse: many range updates, then one pass to read values.

## Patterns and formulas
- **Prefix sum, 1-indexed.** `pre[0] = 0; pre[i] = pre[i-1] + a[i]`. Sum of `[l, r]` = `pre[r] - pre[l-1]`.
- **Prefix count of a property.** Same thing with 0/1 values: count of even numbers in `[l, r]`, count of letter c in `s[l..r]` (26 prefix arrays).
- **Difference array.** To add v on `[l, r]`: `d[l] += v; d[r+1] -= v`. Then prefix-sum d to get the final array.
- **Subarrays with sum = k.** Walk i, keep `map[pre]` counts; answer += `map[pre[i] - k]`; then `map[pre[i]]++`.
- **Prefix xor** works the same as prefix sum because xor is its own inverse.
- **2D prefix sum.** `P[i][j] = a[i][j] + P[i-1][j] + P[i][j-1] - P[i-1][j-1]`. Rectangle sum uses the same inclusion-exclusion.
- **Prefix max / min** for "best to the left of i" and suffix arrays for "best to the right of i".

**Learn:** [USACO Guide: Prefix Sums](https://usaco.guide/silver/prefix-sums)

## Pitfalls
- Use long long. 2e5 elements times 1e9 overflows int.
- Off by one at `l-1` when 0-indexed. Just 1-index the prefix array always.
- Difference array needs size n+2.

## Plan
1. [ ] [1945C Left and Right Houses](https://codeforces.com/problemset/problem/1945/C) (1200)
2. [ ] [1922C Closest Cities](https://codeforces.com/problemset/problem/1922/C) (1300)
3. [ ] [1996C Sort](https://codeforces.com/problemset/problem/1996/C) (1300)
4. [ ] [2033D Kousuke's Assignment](https://codeforces.com/problemset/problem/2033/D) (1300)
5. [ ] [2014D Robert Hood and Mrs Hood](https://codeforces.com/problemset/problem/2014/D) (1400, difference array)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
