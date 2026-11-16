/*
C. Beautiful Triple Pairs   (Codeforces Round 946, Div. 3, rated ~1400)
https://codeforces.com/contest/1974/problem/C

time limit per test: 4 seconds
memory limit per test: 256 megabytes

Polycarp was given an array a of n integers. He really likes triples of
numbers, so for each j (1 <= j <= n - 2) he wrote down a triple of elements
[a_j, a_{j+1}, a_{j+2}].

Polycarp considers a pair of triples b and c beautiful if they differ in
exactly one position, that is, one of the following conditions is satisfied:
  - b_1 != c_1 and b_2 = c_2 and b_3 = c_3;
  - b_1 = c_1 and b_2 != c_2 and b_3 = c_3;
  - b_1 = c_1 and b_2 = c_2 and b_3 != c_3.

Find the number of beautiful pairs of triples among the written triples
[a_j, a_{j+1}, a_{j+2}].

Input:
The first line contains a single integer t (1 <= t <= 10^4) — the number of
test cases.
The first line of each test case contains a single integer n
(3 <= n <= 2 * 10^5) — the length of the array a.
The second line of each test case contains n integers a_1, a_2, ..., a_n
(1 <= a_i <= 10^6) — the elements of the array.
It is guaranteed that the sum of the values of n for all test cases in the
test does not exceed 2 * 10^5.

Output:
For each test case, output a single integer — the number of beautiful pairs
of triples among the pairs of the form [a_j, a_{j+1}, a_{j+2}].
Note that the answer may not fit into 32-bit data types.

Example (from memory, verify on the site):
Input:
8
5
3 2 2 2 3
5
1 2 1 2 1
8
1 2 3 2 2 3 4 2
4
2 1 1 1
8
2 1 1 2 1 1 1 1
7
2 1 1 1 1 1 1
6
2 1 1 1 1 1
5
2 1 1 1 1

Output:
2
0
3
1
8
4
3
2

Note:
In the first example, a = [3, 2, 2, 2, 3], Polycarp will write the
following triples:
  1. [3, 2, 2];
  2. [2, 2, 2];
  3. [2, 2, 3].
The beautiful pairs are triple 1 with triple 2 and triple 2 with triple 3.
*/

// how to compile g++ -std=gnu++17 -O2 1974C_Beautiful_Triple_Pairs.cpp -o main && ./main
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
