/*
E. Klee's SUPER DUPER LARGE Array!!!   (Codeforces Round 971, Div. 4, rated ~1400)
https://codeforces.com/contest/2009/problem/E

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Klee has an array a of length n containing integers [k, k+1, ..., k+n-1] in
that order. Klee wants to choose an index i (1 <= i <= n) such that

    x = |a_1 + a_2 + ... + a_i - a_{i+1} - ... - a_n|

is minimized. Note that for an arbitrary integer z, |z| represents the
absolute value of z.

Output the minimum possible value of x.

Input:
The first line contains t (1 <= t <= 10^4) — the number of test cases.
Each test case contains two integers n and k (2 <= n, k <= 10^9) — the
length of the array and the starting element of the array.

Output:
For each test case, output the minimum value of x on a new line.

Example (from memory, verify on the site):
Input:
4
2 2
7 2
5 3
1000000000 1000000000

Output:
1
5
1
347369930

Note:
In the first sample, a = [2, 3]. When i = 1 is chosen, x = |2 - 3| = 1. It
can be shown this is the minimum possible value of x.
In the third sample, a = [3, 4, 5, 6, 7]. When i = 3 is chosen,
x = |3 + 4 + 5 - 6 - 7| = 1. It can be shown this is the minimum possible
value of x.
*/

// how to compile g++ -std=gnu++17 -O2 2009E_Klees_SUPER_DUPER_LARGE_Array.cpp -o main && ./main
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


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        ll n, k; cin >> n >> k; 
        ll total = n * (2 * k + n - 1) / 2;

        ll best = total;
        int l = 0; int r = n-1;

        while (l <= r) { // try to converge to 0 
            int mid = (l + r) / 2;
            ll lhs = (2 * k + mid) * (mid + 1) / 2;

            if (2*lhs - total > 0) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
            best = min(best, abs(2*lhs - total));
        }
        cout << best << "\n";
    }
    return 0;
}
