/*
E. Secret Box   (Codeforces Round 952, Div. 4, rated ~1200)
https://codeforces.com/contest/1985/problem/E

time limit per test: 1 second
memory limit per test: 256 megabytes

Ntarsis has a box B with side lengths x, y, and z. It lies in the 3D
coordinate plane, extending from (0, 0, 0) to (x, y, z).

Ntarsis has a secret box S. He wants to choose its dimensions such that all
side lengths are positive integers, and the volume of S is k. He can place S
somewhere within B such that:
  - S is parallel to all axes.
  - every corner of S lies on an integer coordinate.

S is magical, so when placed at an integer location inside B, it will not
fall to the ground.

Among all possible ways to choose the dimensions of S, determine the maximum
number of distinct locations he can choose to place his secret box S inside
B. Ntarsis does not rotate S once its side lengths are selected.

Input:
The first line consists of an integer t, the number of test cases
(1 <= t <= 2000). The description of the test cases follows.
The first and only line of each test case contains four integers x, y, z
and k (1 <= x, y, z <= 2000, 1 <= k <= x * y * z).
It is guaranteed the sum of all x, sum of all y, and sum of all z do not
exceed 2000 over all test cases.
Note that k may not fit in a standard 32-bit integer data type.

Output:
For each test case, output the answer as an integer on a new line. If there
is no way to select the dimensions of S so it fits in B, output 0.

Example (from memory, verify on the site):
Input:
7
3 3 3 8
3 3 3 18
5 1 1 1
2 2 2 7
3 4 2 12
4 3 1 6
1800 1800 1800 4913000000

Output:
8
2
5
0
4
4
1030301

Note:
For the first test case, it is optimal to choose S with side lengths 2, 2,
and 2, which has a volume of 2 * 2 * 2 = 8. It can be shown there are 8 ways
to put S inside B.
The coordinate with the least x, y, and z values for each possible
arrangement of S are:
(0,0,0), (1,0,0), (0,1,0), (0,0,1), (1,0,1), (1,1,0), (0,1,1), (1,1,1).
The arrangement of S with a coordinate of (0, 0, 0) is depicted in the
statement picture on the site.
For the second test case, S with side lengths 2, 3, and 3 are optimal.
*/

// how to compile g++ -std=gnu++17 -O2 1985E_Secret_Box.cpp -o main && ./main
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

// 4 3 1 6 -> 3, 2, 1 2*2 = 4 + 2,3,1 2 = 6
// so we have to go through all the canidates
// use long long sides are too long k = 8 * 10^9 max
// what does that mean? 

ll solve(ll x, ll y, ll z, ll k) {
    if (x * y * z < k) {
        return 0;
    }

    if (x * y * z == k) {
        return 1; 
    }

    ll best = 0; 
    for (int i = 1; i <= x; i++) {
        if (k % i) continue;
        ll prod = k / i;
        for (int j = 1; j <= y; j++) {
            if(prod % j == 0 and prod / j <= z) {
                best = max(best, (x-i+1) * (y-j+1) * (z-prod/j+1));
            }
        }
    }
    return best;
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        ll x, y, z, k; 
        cin >> x >> y >> z >> k;

        cout << solve(x, y, z, k) << "\n";
    }
    return 0;
}
