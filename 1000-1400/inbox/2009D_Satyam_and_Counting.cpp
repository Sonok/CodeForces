/*
D. Satyam and Counting   (Codeforces Round 971, Div. 4, rated ~1400)
https://codeforces.com/contest/2009/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Satyam is given n distinct points on the 2D coordinate plane. It is
guaranteed that 0 <= y_i <= 1 for all given points (x_i, y_i). How many
different nondegenerate right triangles can be formed from choosing three
different points as its vertices?

Two triangles a and b are different if there is a point v such that v is a
vertex of a but not a vertex of b.

A nondegenerate triangle has positive area; a right triangle has one
interior angle equal to 90 degrees.

Input:
The first line contains an integer t (1 <= t <= 10^4) — the number of test
cases.
The first line of each test case contains an integer n
(3 <= n <= 2 * 10^5) — the number of points.
The following n lines contain two integers x_i and y_i
(0 <= x_i <= n, 0 <= y_i <= 1) — the i-th point that Satyam can choose from.
It is guaranteed that all (x_i, y_i) are pairwise distinct.
It is guaranteed that the sum of n over all test cases does not exceed
2 * 10^5.

Output:
Output an integer for each test case, the number of distinct nondegenerate
right triangles that can be formed from choosing three points.

Example (from memory, verify on the site):
Input:
3
5
1 0
1 1
3 0
5 0
2 1
3
0 0
1 0
3 0
9
1 0
2 0
3 0
4 0
5 0
2 1
7 1
8 1
9 1

Output:
4
0
8

Note:
The four triangles in question for the first test case are shown in the
picture on the site.
*/

// how to compile g++ -std=gnu++17 -O2 2009D_Satyam_and_Counting.cpp -o main && ./main
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
