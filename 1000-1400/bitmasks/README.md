# Bitmasks

Status: not started

## What it is
Treat an integer as a set of bits. AND, OR, XOR each have properties you can exploit, and small sets (n <= 20) can be enumerated as integers 0 to 2^n - 1.

## Patterns and formulas
- **Bit ops.** test `x >> k & 1`, set `x | (1 << k)`, clear `x & ~(1 << k)`, flip `x ^ (1 << k)`, lowest set bit `x & -x`, popcount `__builtin_popcountll(x)`.
- **XOR properties.** `a ^ a = 0`, `a ^ 0 = a`, xor is its own inverse so prefix xor works like prefix sum. XOR of 1..n has period 4.
- **Per-bit independence.** For AND/OR/XOR of many numbers, solve each bit position separately and count how many numbers have that bit.
- **OR only grows, AND only shrinks** as you add elements. At most 30 distinct values of a running OR/AND over a prefix.
- **Enumerate subsets.** `for mask in 0..(1<<n)-1`, iterate members with `for i if mask >> i & 1`.
- **Sum of bits** `a + b = (a ^ b) + 2 * (a & b)`.

**Learn:** [USACO Guide: Bit Operations](https://usaco.guide/silver/intro-bitwise)

## Pitfalls
- `1 << 31` overflows int. Use `1LL << k` for k >= 31.
- Operator precedence: `x & 1 == 0` parses as `x & (1 == 0)`. Always parenthesize.
- Bits are indexed from 0.

## Plan
1. [ ] [1991B AND Reconstruction](https://codeforces.com/problemset/problem/1991/B) (1100)
2. [ ] [2085C Serval and The Formula](https://codeforces.com/problemset/problem/2085/C) (1200)
3. [ ] [2020C Bitwise Balancing](https://codeforces.com/problemset/problem/2020/C) (1300)
4. [ ] [1988C Increasing Sequence with Fixed OR](https://codeforces.com/problemset/problem/1988/C) (1300)
5. [ ] [2118C Make It Beautiful](https://codeforces.com/problemset/problem/2118/C) (1300)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
