# Constructive

Status: not started

## What it is
Output any valid object (array, permutation, string) that meets the conditions, or say none exists. No optimization, just build one.

## Patterns and formulas
- **Small cases by hand.** Write n=1,2,3,4 answers on paper. The pattern is usually visible by n=4.
- **Parity.** Many "-1" cases are parity: odd sum can't split evenly, odd length can't pair up.
- **Extremes.** Put the largest or smallest element first and see what the rest must be.
- **Permutation tricks.** Reverse, swap adjacent pairs, `p[i] = n + 1 - i`, cyclic shift by one.
- **Alternate** two values to avoid adjacency conflicts.
- **Make the invariant obvious.** If the condition is "sum of any two adjacent is odd", alternate parities and the proof writes itself.

**Learn:** [Codeforces blog: constructive problems guide](https://codeforces.com/blog/entry/121393)

## Pitfalls
- Handle n=1 and n=2 explicitly before the general pattern.
- Decide the impossible cases first and print -1 before building.
- Don't search for the unique answer. Any valid answer is accepted, so pick the simplest shape.

## Plan
1. [ ] [1968C Assembly via Remainders](https://codeforces.com/problemset/problem/1968/C) (1000)
2. [ ] [2032B Medians](https://codeforces.com/problemset/problem/2032/B) (1000)
3. [x] [2037C Superultra's Favorite Permutation](https://codeforces.com/problemset/problem/2037/C) (1100)
4. [ ] [1990B Array Craft](https://codeforces.com/problemset/problem/1990/B) (1100)
5. [ ] [1974D Ingenuity-2](https://codeforces.com/problemset/problem/1974/D) (1300)
6. [x] [2035C Alya and Permutation](https://codeforces.com/problemset/problem/2035/C) (1400) — fix the last few positions around the top power of two, special tails for n = 2^k and 2^k + 1
7. [ ] [2111D Creating a Schedule](https://codeforces.com/problemset/problem/2111/D) (1400)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
| 2026-10-18 | [2037C Superultra's Favorite Permutation](https://codeforces.com/problemset/problem/2037/C) | not recorded | accepted, idea found alone | parity split (odd block, even block) with one odd+even seam that sums to 9; only slip was n=2, where 1+2=3 is prime, so test the smallest n by hand before special-casing it |
| 2026-11-25 | [2035C Alya and Permutation](https://codeforces.com/problemset/problem/2035/C) (1400) | not recorded | accepted, general case found alone, about five nudges on the edge cases | Found alone: for odd n the last step is an AND with p_n, so the best is n; for even n the last step is an OR and every bit up to the top one can be set. Only the tail matters: the general case ends with h, h+1, h-1 (h = top power of two), plus n at the very end when n is odd, and everything else goes in front in any order. That passed for all ordinary n on the first run. The trouble was n = 2^k and n = 2^k + 1, where h, h+1, h-1 collide with n. (1) The two special `if`s never ran: `n & (n-1) == 0` is parsed as `n & ((n-1) == 0)`. The compiler warned about it. (2) Power of two: tail 3 1 n-2 n-1 n was right, the printed k was n+1 instead of 2n-1. (3) 2^k + 1: first printed all-ones (impossible, the last AND caps k at n), then the identity (one bit short, the lowest bit is lost), then the right tail 3 1 n-1 n with 3 printed twice. Used a checker script that replays the permutation, since diff is useless when any answer is accepted. Read the compiler warnings; test the smallest n of each special shape by hand. |
