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
9. [x] [1985E Secret Box](https://codeforces.com/problemset/problem/1985/E) (1200) — brute force two sides, third is forced by the volume
10. [x] [2009D Satyam and Counting](https://codeforces.com/problemset/problem/2009/D) (1400) — counting (filed here as the nearest counting folder): two shapes of right angle when y is 0 or 1
11. [x] [2050C Uninteresting Number](https://codeforces.com/problemset/problem/2050/C) (1200) — digit sum mod 9, only 2s and 3s can change it

## Log

| Date | Problem | Time | Result | What went wrong / what clicked |
|---|---|---|---|---|
| 2026-10-10 | 1931D Divisible Pairs | not recorded | accepted | A pair works iff (a_i mod x, a_i mod y) and (a_j mod x, a_j mod y) have mod-y parts equal and mod-x parts summing to 0 mod x. One sweep with a map keyed by the residue pair: look up the partner key ((x - r) % x, s) before inserting. The `% x` on the partner handles r = 0. |
| 2026-10-14 | [1932C LR-remainders](https://codeforces.com/problemset/problem/1932/C) | not recorded | accepted with hints | tried to factorize and divide out removed elements (CRT rabbit hole); no inverse mod composite m, so reverse the commands and only multiply. Survivor index = count of L in first n-1 commands |
| 2026-11-15 | [1999E Triple Operations](https://codeforces.com/problemset/problem/1999/E) (1300) | ~55 min | accepted, idea found alone, 1 WA, hints only on the float bug | Idea came alone in about 20 min: an operation moves one base-3 digit, so zero the smallest number first (its digit count), which hands those digits to another number, then every number costs its own digit count; total = 2 * digits(l) + sum of digits(l+1..r). Wrong answer on test 1 although the sample passed locally: `floor(log(i) / log(3))` gave 3 for 81 on the judge. Floating point is not the same on two machines, so a local pass proves nothing. Rewrote alone to count digits with an integer loop and to add whole blocks of equal digit count (i up to the next power of 3) instead of looping over every number, which also removes the 1e4 * 2e5 loop. Still uses `pow(3, power)` cast to int, same family of risk: build powers by multiplying integers. |
| 2026-11-17 | [1974C Beautiful Triple Pairs](https://codeforces.com/problemset/problem/1974/C) (1400) | not recorded | accepted on the first submit, with 5 small hints | Counting with maps, not number theory proper. Saw alone that O(n^2) is out and that pairs need not be neighbours, and thought of grouping by adjacent elements but dropped it because the differing element could be left, middle or right. The unlock was that one grouping does not have to cover all three: a pair differing in exactly one position belongs to exactly one case, so do three groupings and add. Built map<pair, map<int,int>> per case and counted differing pairs inside a group with seen * value in one pass, which needs no subtraction. First wrote the total as C(n-2, 2) minus same-bucket pairs; the 'all pairs' must be per group. Used long long after the nudge about the 32-bit warning. When a condition says 'exactly one of k things', solve each of the k alone and check they cannot overlap. |
| 2026-11-18 | [1985E Secret Box](https://codeforces.com/problemset/problem/1985/E) (1200) | not recorded | accepted, idea found alone, one round of nudges on three slips | Idea alone: loop the first two side lengths, the third is k / (i * j) when it divides and fits, and the placements multiply per axis. x, y, z are at most 2000, so two loops are 4e6 steps. Three slips, all found after a nudge each: wrote prod / y where prod / j was meant; counted placements as (x - i) instead of (x - i + 1); returned int although the answer can reach 8e9. Fence-post check: a piece of length 1 in a row of 3 has 3 places. The early return for x*y*z == k is not needed, the loops cover it. |
| 2026-11-19 | [2009D Satyam and Counting](https://codeforces.com/problemset/problem/2009/D) (1400) | not recorded | accepted, idea found alone, no hints on the idea | Started toward a map of slopes per point, saw alone that float keys are unsafe, then dropped slopes entirely once the y in {0, 1} constraint sank in. Final count: for each point with a point directly above or below it, the right angle sits there with any other point on its own line (line count - 1); plus 1 if both (x-1, other y) and (x+1, other y) exist. Lookups in a set of pairs, total in long long. Verified against a brute force on 1000 random cases. The one WA was not the code: an empty template file was submitted, so the judge saw no output. Check the submitted file name, and read 'output contains 0 elements' as 'wrong file'. Only C++ syntax questions otherwise (map of maps, map of vectors, fractions as keys). |
| 2026-11-21 | [2050C Uninteresting Number](https://codeforces.com/problemset/problem/2050/C) (1200) | not recorded | accepted | A number is divisible by 9 iff its digit sum is. Squaring keeps 0 and 1, turns 2 into 4 (+2) and 3 into 9 (+6), and is not allowed for 4-9. So count the 2s and 3s and check whether total + 2i + 6j is a multiple of 9 for some i <= count2, j <= count3. The double loop looks like 1e5 * 1e5 but is not: 2i mod 9 hits every residue within i = 0..8, so with 8 or more 2s the answer is found on the first j, and with fewer the loop is at most 8 * 1e5. Capping both loops at 8 makes that explicit. The solve() function from the template was deleted and the code written inside main, which works. |
