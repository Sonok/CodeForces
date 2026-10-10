/*
D. Divisible Pairs   (Codeforces Round 925, Div. 3, rated ~1200)
https://codeforces.com/contest/1931/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Polycarp has two favorite integers x and y (they can be equal), and he
has found an array a of length n.

Polycarp considers a pair of indices <i, j> (1 <= i < j <= n)
beautiful if:
  - a_i + a_j is divisible by x;
  - a_i - a_j is divisible by y.

For example, if x = 5, y = 2, n = 6, a = [1, 2, 7, 4, 9, 6], then the
only beautiful pairs are:
  - <1, 5>: a_1 + a_5 = 1 + 9 = 10 (10 is divisible by 5) and
            a_1 - a_5 = 1 - 9 = -8 (-8 is divisible by 2);
  - <4, 6>: a_4 + a_6 = 4 + 6 = 10 (10 is divisible by 5) and
            a_4 - a_6 = 4 - 6 = -2 (-2 is divisible by 2).

Find the number of beautiful pairs in the array a.

Input:
The first line contains t (1 <= t <= 10^4) — the number of test cases.
The first line of each test case contains three integers n, x, y
(2 <= n <= 2*10^5, 1 <= x, y <= 10^9).
The second line contains n integers a_1 ... a_n (1 <= a_i <= 10^9).
It is guaranteed that the sum of n over all test cases does not exceed
2*10^5.

Output:
For each test case, output a single integer — the number of beautiful
pairs in the array a.

Example (official samples, verify on the site):
Input:
7
6 5 2
1 2 7 4 9 6
7 9 5
1 10 15 3 8 12 15
9 4 10
14 10 2 2 11 11 13 5 6
9 5 6
10 7 6 7 9 7 7 10 10
9 6 2
4 9 7 1 2 2 13 3 15
9 2 3
14 6 1 15 12 9 6 7 5
9 5 7
13 3 15 7 13 14 11 11 11

Output:
2
0
1
3
5
7
0
*/

// how to compile g++ -std=gnu++17 -O2 1931D_Divisible_Pairs.cpp -o main && ./main
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

void solve(int x, int y, const vector<int>& nums) {
    map<pair<int,int>, int> divisors;
    ll total = 0;

    for(int val: nums) {
        int a = val%x;
        int b = val%y;
        total += 1L * divisors[{(x-a) % x, b}];
        divisors[{a,b}]++;
    }
    cout << total << "\n";

}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for(int i=0; i<n;i++) cin >> a[i];
        solve(x,y,a);
    }

    return 0;
}
