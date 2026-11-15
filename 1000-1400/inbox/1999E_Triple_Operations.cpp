/*
E. Triple Operations   (Codeforces Round 964, Div. 4, rated ~1300)
https://codeforces.com/contest/1999/problem/E

time limit per test: 1 second
memory limit per test: 256 megabytes

On the board Ivy wrote down all integers from l to r, inclusive.

In an operation, she does the following:
  - pick two numbers x and y on the board, erase them, and in their place
    write the numbers 3x and floor(y / 3). (Here floor denotes rounding down
    to the nearest integer.)

What is the minimum number of operations Ivy needs to make all numbers on
the board equal 0? We have a proof that this is always possible.

Input:
The first line contains an integer t (1 <= t <= 10^4) — the number of test
cases.
The only line of each test case contains two integers l and r
(1 <= l < r <= 2 * 10^5).

Output:
For each test case, output a single integer — the minimum number of
operations needed to make all numbers on the board equal 0.

Example (from memory, verify on the site):
Input:
4
1 3
2 4
199999 200000
19 84

Output:
5
6
36
263

Note:
In the first test case, we can perform 5 operations as follows:
1,2,3 -> 3,0,3 -> 1,0,3 -> 1,0,1 -> 0,0,1 -> 0,0,0.
*/

// how to compile g++ -std=gnu++17 -O2 1999E_Triple_Operations.cpp -o main && ./main
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
