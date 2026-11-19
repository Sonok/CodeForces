/*
C1. Magnitude (Easy Version)   (Codeforces Global Round 26, rated ~1300)
https://codeforces.com/contest/1984/problem/C1

time limit per test: 2 seconds
memory limit per test: 256 megabytes

The two versions of the problem are different. You may want to read both
versions. You can make hacks only if both versions are solved.

You are given an array a of length n. Start with c = 0. Then, for each i
from 1 to n (in increasing order) do exactly one of the following:
  - Option 1: set c to c + a_i.
  - Option 2: set c to |c + a_i|, where |x| is the absolute value of x.

Let the maximum final value of c after the procedure described above be
equal to k. Find k.

Input:
The first line contains a single integer t (1 <= t <= 10^4) — the number of
test cases.
The first line of each test case contains a single integer n
(2 <= n <= 2 * 10^5).
The second line of each case contains n integers a_1, a_2, a_3, ..., a_n
(-10^9 <= a_i <= 10^9).
The sum of n over all test cases does not exceed 3 * 10^5.

Output:
For each test case, output a single integer — the value of k.

Example (from memory, verify on the site):
Input:
5
4
10 -9 -3 4
8
1 4 3 4 1 4 3 4
3
-1 -2 -3
4
-1000000000 1000000000 1000000000 1000000000
4
1 9 8 4

Output:
6
24
6
4000000000
22

Note:
In the first test case, if we set c to its absolute value every time we add
to it, we end up with 6. It can be shown that this is the maximum result.
In the second test case, taking the absolute value will never change
anything, so we can just sum the array without doing anything to get 24.
In the third test case, it is optimal to wait until the end to set c to its
absolute value, resulting in an answer of 6.
*/

// how to compile g++ -std=gnu++17 -O2 1984C1_Magnitude_Easy.cpp -o main && ./main
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
