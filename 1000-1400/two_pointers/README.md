# Two pointers / sliding window

Status: not started

## What it is
Two indices that only ever move forward. Total work O(n) because each pointer moves at most n times.

## Patterns and formulas
- **Sliding window.** Grow `r`, maintain a running sum/count/set. While the window is invalid, shrink `l`. Answer is updated after each `r`.
  ```
  for r in 0..n-1: add a[r]; while (bad) remove a[l++]; ans = max(ans, r-l+1)
  ```
- **Count of valid subarrays ending at r** is `r - l + 1` when "valid" is monotone (shrinking a valid window keeps it valid).
- **Two sorted arrays, opposite ends.** `i` from the left of a, `j` from the right of b; move whichever makes the condition true.
- **Same array, two sorted pointers** for "max elements within distance d": sort, then for each `r` move `l` while `a[r] - a[l] > d`.
- **Distinct count in window** with a frequency array or map, track how many keys have count > 0.

**Learn:** [USACO Guide: Two Pointers](https://usaco.guide/silver/two-pointers)

## Pitfalls
- The window must be monotone: if adding an element can make a bad window good again, two pointers is wrong, use binary search or prefix sums.
- Shrink with `while`, not `if`.
- Use long long for running sums.

## Plan
1. [ ] [1968B Prefiquence](https://codeforces.com/problemset/problem/1968/B) (900)
2. [ ] [2051D Counting Pairs](https://codeforces.com/problemset/problem/2051/D) (1200)
3. [ ] [2000D Right Left Wrong](https://codeforces.com/problemset/problem/2000/D) (1300)
4. [ ] [2025C New Game](https://codeforces.com/problemset/problem/2025/C) (1300)
5. [ ] [2032C Trinity](https://codeforces.com/problemset/problem/2032/C) (1400)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
