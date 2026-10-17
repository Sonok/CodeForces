/*
C. Superultra's Favorite Permutation   (Codeforces Round 988, Div. 3, rated ~1100)
https://codeforces.com/contest/2037/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Superultra, a little red panda, desperately wants primogems. In his dreams,
a voice tells him that he must solve the following task to obtain a lifetime
supply of primogems. Help Superultra!

Construct a permutation p of length n such that p_i + p_{i+1} is composite
over all 1 <= i <= n - 1. If it's not possible, output -1.

A permutation of length n is an array consisting of n distinct integers from
1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but
[1,2,2] is not a permutation (2 appears twice in the array), and [1,3,4] is
also not a permutation (n=3 but there is 4 in the array).

An integer x is composite if it has at least one other divisor besides 1
and x. For example, 4 is composite because 2 is a divisor.

Input:
The first line contains t (1 <= t <= 10^4) — the number of test cases.
Each test case contains an integer n (2 <= n <= 2 * 10^5) — the length of
the permutation.
It is guaranteed that the sum of n over all test cases does not exceed
2 * 10^5.

Output:
For each test case, if it's not possible to construct p, output -1 on a new
line. Otherwise, output n integers p_1, p_2, ..., p_n on a new line.
If there are multiple answers, print any of them.

Example (official samples, verify on the site):
Input:
2
3
8

Output:
-1
1 8 7 3 6 2 4 5
*/

// how to compile g++ -std=gnu++17 -O2 2037C_Superultras_Favorite_Permutation.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <numeric>
#include <cstring>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const ll INF = (ll)1e18;
const int MOD = 1e9 + 7;

void solve() {
    // write solution here
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        solve();
    }
    return 0;
}
