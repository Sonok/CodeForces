/*
C. Basil's Garden   (EPIC Institute of Technology Round Summer 2024, Div. 1 + Div. 2, rated ~1200)
https://codeforces.com/contest/1987/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

There are n flowers in a row, the i-th of them initially has a positive
height of h_i meters.

Every second, the wind will blow from the left, causing the height of some
flowers to decrease.

Specifically, every second, for each i from 1 to n, in this order, the
following happens:
  - If i = n or h_i > h_{i+1}, the value of h_i changes to max(0, h_i - 1).

How many seconds will pass before h_i = 0 for all 1 <= i <= n for the first
time?

Input:
Each test contains multiple test cases. The first line of input contains a
single integer t (1 <= t <= 10^4) — the number of test cases.
The first line of each test case contains a single integer n
(1 <= n <= 10^5) — the number of flowers.
The second line of each test case contains n integers h_1, h_2, ..., h_n
(1 <= h_i <= 10^9) — the heights of the flowers.
It is guaranteed that the sum of n over all test cases does not exceed 10^5.

Output:
For each test case, output a single integer — the number of seconds that
will pass before h_i = 0 for all 1 <= i <= n.

Example (from memory, verify on the site):
Input:
4
3
1 1 2
2
3 1
1
9
5
7 4 4 3 2

Output:
4
3
9
7

Note:
In the first test case, the flower heights change as follows:
[1, 1, 2] -> [1, 1, 1] -> [1, 1, 0] -> [1, 0, 0] -> [0, 0, 0].
In the second test case, the flower heights change as follows:
[3, 1] -> [2, 0] -> [1, 0] -> [0, 0].
*/

// how to compile g++ -std=gnu++17 -O2 1987C_Basils_Garden.cpp -o main && ./main
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
// 7 4 4 3 2 -> 6 4 3 3 1 -> 5 3 3 2 0 ->
// 4 3 2 1 0 -> 3 2 1 0 0 -> 2 1 0 0 0 -> 
// 1 0 0 0 0 -> 0 0 0 0 0

// the first value is always the one that get's converted to 0 last
// 10^9 * 10^5 * 10^4 ~ 10^18 far too large will TLE 

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n; cin >> n;
        vector<int> h(n);
        for(int i=0;i<n;i++) cin >> h[i];

        vector<int> dp(n, 0);
        dp[n-1] = h[n-1];
        
        // a_k < a_k+1  we reduce a_{k+1} untill it
        // is equalt to a_k - 1 the both reduce at teh same time 
        // if a_k <= a_{k+1} then a_k reduces as it 

        for(int i = n-2; i >=0; i--) {
            dp[i] = max(dp[i+1] + 1, h[i]);
        }
        cout << dp[0] << "\n";
    }
    return 0;
}
