/*
D. Sakurako's Hobby   (Codeforces Round 971, Div. 4, rated ~1100)
https://codeforces.com/contest/2008/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

For a certain permutation p, Sakurako calls an integer j reachable from
an integer i if it is possible to make i equal to j by assigning i = p_i
a certain number of times.

If p = [3, 5, 6, 1, 2, 4], then, for example, 4 is reachable from 1,
because: i = 1 -> i = p_1 = 3 -> i = p_3 = 6 -> i = p_6 = 4. Now i = 4,
so 4 is reachable from 1.

Each number in the permutation is colored either black or white.

Sakurako defines the function F(i) as the number of black integers that
are reachable from i.

Sakurako is interested in F(i) for each 1 <= i <= n, but calculating all
values becomes very difficult, so she asks you, as her good friend, to
compute this.

A permutation of length n is an array consisting of n distinct integers
from 1 to n in arbitrary order.

Input:
The first line contains a single integer t (1 <= t <= 10^4) — the
number of test cases.
The first line of each test case contains a single integer n
(1 <= n <= 2*10^5) — the number of elements in the array.
The second line of each test case contains n integers p_1, ..., p_n
(1 <= p_i <= n) — the elements of the permutation.
The third line of each test case contains a string s of length n,
consisting of '0' and '1'. If s_i = '0', then the number p_i is colored
black; if s_i = '1', then the number p_i is colored white.
It is guaranteed that the sum of n across all test cases does not
exceed 2*10^5.

Output:
For each test case, output n integers F(1), F(2), ..., F(n).

Example (official samples, verify on the site):
Input:
5
1
1
0
5
1 2 4 5 3
10101
5
5 4 1 3 2
10011
6
3 5 6 1 2 4
010000
6
1 2 3 4 5 6
100110

Output:
1
0 1 1 1 1
2 2 2 2 2
4 1 4 4 1 4
0 1 1 0 0 1
*/

// how to compile g++ -std=gnu++17 -O2 2008D_Sakurakos_Hobby.cpp -o main && ./main
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
