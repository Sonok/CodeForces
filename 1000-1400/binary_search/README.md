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
- Interpolating between two checkpoints: compute `(d - a0) * (b1 - b0) / (a1 - a0)` entirely in `long long` (`1LL *`). Going through `double` to dodge overflow truncates exact integers to n-1.

## Plan
1. [x] [1971E Find the Car](https://codeforces.com/problemset/problem/1971/E) (1100)
2. [ ] [2014C Robin Hood in Town](https://codeforces.com/problemset/problem/2014/C) (1100)
3. [ ] [2020B Brightness Begins](https://codeforces.com/problemset/problem/2020/B) (1200)
4. [ ] [2093E Min Max MEX](https://codeforces.com/problemset/problem/2093/E) (1300)
5. [ ] [1985F Final Boss](https://codeforces.com/problemset/problem/1985/F) (1500)
6. [x] [2009E Klee's SUPER DUPER LARGE Array!!!](https://codeforces.com/problemset/problem/2009/E) (1400) — binary search on prefix length with a closed-form sum
7. [x] [2005B2 The Strict Teacher (Hard Version)](https://codeforces.com/problemset/problem/2005/B2) (1200) — sort the teachers, lower_bound each query, three cases

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
| 2026-10-14 | [1971E Find the Car](https://codeforces.com/problemset/problem/1971/E) | not recorded | accepted, idea found alone | lower_bound on the checkpoint array was right first try; lost the rest to escaping int overflow with `double` instead of `1LL *` (truncation of 92.999... gave 92) |
| 2026-11-14 | [2009E Klee's SUPER DUPER LARGE Array!!!](https://codeforces.com/problemset/problem/2009/E) (1400) | ~73 min | accepted, idea found alone, bugs fixed with hints | Idea was right from the first attempt: prefix sums cross half the total, check around the crossing. Lost the time to implementation. Built the array and prefix vector for n = 1e9 (8 GB, runtime error) instead of using the closed form. Then mixed index and count in the sum: prefix ending at index mid has mid + 1 elements and last element k + mid. Then the branch test (lhs >= 0) never flipped, and after fixing it the two branches were swapped. Check n against memory first; test the formula at mid = 0; say out loud which way to move when the left side is too big. |
| 2026-11-23 | [2005B2 The Strict Teacher (Hard Version)](https://codeforces.com/problemset/problem/2005/B2) (1200) | not recorded | accepted, idea found alone, three vague hints on slips | Whole idea came alone: sort the teachers, lower_bound David's cell, then three cases. Left of every teacher he runs to cell 1 and the answer is b[0] - 1; right of every teacher it is n - b[m-1]; between two teachers they close in from both sides and the answer is (b[i] - b[i-1]) / 2. Three slips. Used b[i+1] - b[i], but lower_bound returns the teacher on the right, so the left one is b[i-1]. Wrote (diff + 1) / 2; teachers at 1 and 4 with David at 2 give 1, which is diff / 2. Sized the query vector with n instead of q, so the range-for printed n lines per test (and n can be 1e9, which would not even allocate). The solve() stub from the template is still in the file, unused. |
