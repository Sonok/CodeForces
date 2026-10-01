/*
D. Very Different Array   (Codeforces Round 920 Div. 3, rated ~1200)
https://codeforces.com/contest/1921/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Petya has an array a_i of n integers. His brother Vasya became envious
and decided to make the same array. Vasya already has an array b_j of
m integers (m >= n).

Vasya wants to build an array c_i of n integers as follows: for each i
from 1 to n he picks some index j that has not been used before and sets
c_i = b_j. Each element of b can be used at most once.

Vasya wants the array c to be as different as possible from a, so he
wants to maximize

    D = |a_1 - c_1| + |a_2 - c_2| + ... + |a_n - c_n|

Help Vasya find the maximum possible value of D.

Input:
The first line contains t (1 <= t <= 10^4) — the number of test cases.
Each test case consists of three lines:
  n and m (1 <= n <= m <= 2*10^5)
  a_1 ... a_n (1 <= a_i <= 10^9)
  b_1 ... b_m (1 <= b_j <= 10^9)
The sum of n and the sum of m over all test cases do not exceed 2*10^5.

Output:
For each test case print a single integer — the maximum value of D.

Example (first sample case, verified by brute force):
Input:
1
4 6
6 1 2 4
3 4 1 5 1 5

Output:
15

(Check the remaining samples on the problem page before submitting.)
*/

// how to compile g++ -std=gnu++17 -O2 1921D_Very_Different_Array.cpp -o main && ./main

//Right now, for each a[i] you pick whichever end of c is better for that one element, then move on. But that choice can steal a value that a later element needed more.

// Your first attempt (the d1 / d2 idea) was actually closer to the right track. Think about the structure of the best answer:

// The smallest elements of a want to pair with the largest elements of c.
// The largest elements of a want to pair with the smallest elements of c.

// 2nd hint: Small hint: you're really close, and the bug is in which c index each group uses.

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

ll solve(vector<int> &a, vector<int> &c) {
    // write solution her
    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    int n = a.size();
    int m = c.size();

    ll total = 0;
    for(int i = 0; i < n; i++) {
        total += max(abs(a[i] - c[m-1-i]),
            abs(a[i] - c[n-1-i]));
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n); vector<int> c(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> c[i];

        cout << solve(a, c) << "\n";
    }
    return 0;
}
