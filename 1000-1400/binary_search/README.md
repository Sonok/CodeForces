# Binary search

Status: not started

## What it is
If "is X achievable?" is monotone in X (true for all X up to some point, then false), you can find the boundary in log steps instead of trying every X. Most Div 3 E problems are this.

## Patterns and formulas
- **Binary search on the answer.** Write `bool ok(x)` first. Then:
  ```
  lo = smallest possible, hi = largest possible
  while (lo < hi) { mid = lo + (hi - lo) / 2; if (ok(mid)) hi = mid; else lo = mid + 1; }   // first true
  ```
  For last true: `mid = lo + (hi - lo + 1) / 2; if (ok(mid)) lo = mid; else hi = mid - 1;`
- **Answer range.** `hi` is often 1e9 or 2e18 so use long long. Steps = log2(range) ~ 31 or 61.
- **lower_bound / upper_bound** on a sorted vector: first element >= x, first element > x. Count of elements in [a, b] = `upper_bound(b) - lower_bound(a)`.
- **Max of min / min of max** problems are always binary search on the answer.
- **Check function** is usually a greedy sweep in O(n), total O(n log range).

**Learn:** [USACO Guide: Binary Search](https://usaco.guide/silver/binary-search)

## Pitfalls
- `mid = (lo + hi) / 2` overflows when lo + hi > 2e9. Use `lo + (hi - lo) / 2`.
- Infinite loop when `lo = mid` with `mid = (lo+hi)/2`. Match the rounding to the branch.
- Verify the monotonicity in one sentence before coding. If ok(x) can go true, false, true, it's not binary search.

## Plan
1. [ ] [1971E Find the Car](https://codeforces.com/problemset/problem/1971/E) (1100)
2. [ ] [2014C Robin Hood in Town](https://codeforces.com/problemset/problem/2014/C) (1100)
3. [ ] [2020B Brightness Begins](https://codeforces.com/problemset/problem/2020/B) (1200)
4. [ ] [2093E Min Max MEX](https://codeforces.com/problemset/problem/2093/E) (1300)
5. [ ] [1985F Final Boss](https://codeforces.com/problemset/problem/1985/F) (1500)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
