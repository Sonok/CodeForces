# Strings

Status: not started

## What it is
At 1000 to 1400 string problems are counting and structure, not algorithms. Frequency arrays, palindromes, two pointers, prefix counts, and simulation.

## Patterns and formulas
- **Frequency array.** `int cnt[26]; cnt[c - 'a']++`. Anagram check is equal cnt arrays.
- **Palindrome.** `s[i] == s[n-1-i]` for all i. Can be a palindrome by rearranging iff at most one char has odd count.
- **Prefix count per letter** for "how many of letter c in s[l..r]".
- **Two pointers on strings** for matching subsequences: advance j in t when `s[i] == t[j]`.
- **Build the answer with a `string` and `push_back`**, never with `+` in a loop of n.
- **Runs / groups.** Compress consecutive equal chars into (char, length) pairs.
- **Lexicographic smallest.** Greedy left to right, pick the smallest char that leaves a feasible suffix.

**Learn:** [USACO Guide: String basics](https://usaco.guide/bronze/intro-ds), [cp-algorithms: strings](https://cp-algorithms.com/#string-processing)

## Pitfalls
- `s.substr(i, k)` copies in O(k). Don't call it inside an O(n) loop unless k is tiny.
- `getline` after `cin >> n` needs a `cin.ignore()`.
- Compare chars with `'a'`, not `97`.

## Plan
1. [ ] [2000C Numeric String Template](https://codeforces.com/problemset/problem/2000/C) (1000)
2. [ ] [2114B Not Quite a Palindromic String](https://codeforces.com/problemset/problem/2114/B) (1000)
3. [ ] [1950E Nearly Shortest Repeating Substring](https://codeforces.com/problemset/problem/1950/E) (1100)
4. [ ] [2036C Anya and 1100](https://codeforces.com/problemset/problem/2036/C) (1100)
5. [ ] [2050D Digital string maximization](https://codeforces.com/problemset/problem/2050/D) (1300, also greedy)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
