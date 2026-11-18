# Number theory

Status: in progress (1 of 6 done)

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
3. [x] [1931D Divisible Pairs](https://codeforces.com/problemset/problem/1931/D) (1200)
4. [x] [1932C LR-remainders](https://codeforces.com/problemset/problem/1932/C) (1200)
5. [ ] [2044E Insane Problem](https://codeforces.com/problemset/problem/2044/E) (1300)
6. [ ] [1980D GCD-sequence](https://codeforces.com/problemset/problem/1980/D) (1600, stretch)
7. [x] [1999E Triple Operations](https://codeforces.com/problemset/problem/1999/E) (1300) — base-3 digit counts, smallest number pays twice
8. [x] [1974C Beautiful Triple Pairs](https://codeforces.com/problemset/problem/1974/C) (1400) — counting with maps (filed here as the nearest counting folder): one case per differing position, group by the other two

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
| 2026-10-10 | 1931D Divisible Pairs | not recorded | accepted | A pair works iff (a_i mod x, a_i mod y) and (a_j mod x, a_j mod y) have mod-y parts equal and mod-x parts summing to 0 mod x. One sweep with a map keyed by the residue pair: look up the partner key ((x - r) % x, s) before inserting. The `% x` on the partner handles r = 0. |
| 2026-10-14 | [1932C LR-remainders](https://codeforces.com/problemset/problem/1932/C) | not recorded | accepted with hints | tried to factorize and divide out removed elements (CRT rabbit hole); no inverse mod composite m, so reverse the commands and only multiply. Survivor index = count of L in first n-1 commands |
| 2026-11-15 | [1999E Triple Operations](https://codeforces.com/problemset/problem/1999/E) (1300) | ~55 min | accepted, idea found alone, 1 WA, hints only on the float bug | Idea came alone in about 20 min: an operation moves one base-3 digit, so zero the smallest number first (its digit count), which hands those digits to another number, then every number costs its own digit count; total = 2 * digits(l) + sum of digits(l+1..r). Wrong answer on test 1 although the sample passed locally: `floor(log(i) / log(3))` gave 3 for 81 on the judge. Floating point is not the same on two machines, so a local pass proves nothing. Rewrote alone to count digits with an integer loop and to add whole blocks of equal digit count (i up to the next power of 3) instead of looping over every number, which also removes the 1e4 * 2e5 loop. Still uses `pow(3, power)` cast to int, same family of risk: build powers by multiplying integers. |
| 2026-11-17 | [1974C Beautiful Triple Pairs](https://codeforces.com/problemset/problem/1974/C) (1400) | not recorded | accepted on the first submit, with 5 small hints | Counting with maps, not number theory proper. Saw alone that O(n^2) is out and that pairs need not be neighbours, and thought of grouping by adjacent elements but dropped it because the differing element could be left, middle or right. The unlock was that one grouping does not have to cover all three: a pair differing in exactly one position belongs to exactly one case, so do three groupings and add. Built map<pair, map<int,int>> per case and counted differing pairs inside a group with seen * value in one pass, which needs no subtraction. First wrote the total as C(n-2, 2) minus same-bucket pairs; the 'all pairs' must be per group. Used long long after the nudge about the 32-bit warning. When a condition says 'exactly one of k things', solve each of the k alone and check they cannot overlap. |
