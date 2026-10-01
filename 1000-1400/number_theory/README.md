# Number theory

Status: not started

## What it is
Divisors, gcd, lcm, primes, modular arithmetic, parity. Count something without simulating it.

## Patterns and formulas
- **gcd** `__gcd(a, b)` or `std::gcd`. `lcm(a, b) = a / gcd(a, b) * b` (divide first to avoid overflow).
- **Divisors in O(sqrt n).** `for d = 1; d*d <= n; d++ if n % d == 0: d and n/d`.
- **Sieve to N** in O(N log log N): `is_prime[i*j] = false` for i from 2. Smallest prime factor sieve lets you factor any x <= N in O(log x).
- **Count multiples of k in [1, n]** = `n / k`. In `[l, r]` = `r/k - (l-1)/k`.
- **Modular.** `(a + b) % M`, `(a * b) % M` with long long, `((a - b) % M + M) % M`. Binary exponentiation for `a^b % M` in O(log b). Inverse of a mod prime M is `a^(M-2)`.
- **Parity and sums.** Sum 1..n = `n(n+1)/2`. Sum of first n odds = n². Even + odd = odd.
- **Digit tricks.** Digit sum, last digit cycles with period 4 for powers.

**Learn:** [cp-algorithms: Sieve](https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html), [Binary Exponentiation](https://cp-algorithms.com/algebra/binary-exp.html), [USACO Guide: Divisibility](https://usaco.guide/gold/divisibility)

## Pitfalls
- lcm of two 1e9 values overflows long long if you multiply first.
- `%` of a negative number is negative in C++.
- `pow()` is floating point. Never use it for integers.
- n up to 1e18 means O(sqrt n) is 1e9, too slow. Factor via small primes or think differently.

## Plan
1. [ ] [2034A King Keykhosrow's Mystery](https://codeforces.com/problemset/problem/2034/A) (1000, lcm)
2. [ ] [2043B Digits](https://codeforces.com/problemset/problem/2043/B) (1100)
3. [ ] [1931D Divisible Pairs](https://codeforces.com/problemset/problem/1931/D) (1200)
4. [ ] [1932C LR-remainders](https://codeforces.com/problemset/problem/1932/C) (1200)
5. [ ] [2044E Insane Problem](https://codeforces.com/problemset/problem/2044/E) (1300)
6. [ ] [1980D GCD-sequence](https://codeforces.com/problemset/problem/1980/D) (1600, stretch)

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
