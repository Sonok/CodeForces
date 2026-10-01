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
3. [ ] [2037C Superultra's Favorite Permutation](https://codeforces.com/problemset/problem/2037/C) (1100)
4. [ ] [1990B Array Craft](https://codeforces.com/problemset/problem/1990/B) (1100)
5. [ ] [1974D Ingenuity-2](https://codeforces.com/problemset/problem/1974/D) (1300)
6. [ ] [2035C Alya and Permutation](https://codeforces.com/problemset/problem/2035/C) (1300)
7. [ ] [2111D Creating a Schedule](https://codeforces.com/problemset/problem/2111/D) (1400)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
