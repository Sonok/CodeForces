/*
D. Right Left Wrong   (Codeforces Round 967, Div. 2, rated ~1300)
https://codeforces.com/contest/2000/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Vlad found a strip of n cells, numbered from left to right from 1 to n.
In the i-th cell, there is a positive integer a_i and a letter s_i, where
all s_i are either 'L' or 'R'.

Vlad invites you to try to score the maximum possible points by performing
any (possibly zero) number of operations.

In one operation, you can choose two indices l and r (1 <= l < r <= n)
such that s_l = 'L' and s_r = 'R' and do the following:
  - add a_l + a_{l+1} + ... + a_{r-1} + a_r points to the current score;
  - replace s_i with '.' for all l <= i <= r, meaning you can no longer
    choose these indices.

For example, consider the following strip:
  3 5 1 4 3 2
  L R L L L R
You can first choose l = 1, r = 2 and add 3 + 5 = 8 to your score.
  3 5 1 4 3 2
  . . L L L R
Then choose l = 3, r = 6 and add 1 + 4 + 3 + 2 = 10 to your score.
  3 5 1 4 3 2
  . . . . . .
As a result, it is impossible to perform another operation, and the final
score is 18.

What is the maximum score that can be achieved?

Input:
The first line contains one integer t (1 <= t <= 10^4) — the number of
test cases.
The first line of each test case contains one integer n (2 <= n <= 2 * 10^5)
— the length of the strip.
The second line of each test case contains n integers a_1, a_2, ..., a_n
(1 <= a_i <= 10^5) — the numbers written on the strip.
The third line of each test case contains a string s of n characters
'L' and 'R'.
It is guaranteed that the sum of the values of n across all test cases
does not exceed 2 * 10^5.

Output:
For each test case, output one integer — the maximum possible number of
points that can be scored.

Example (official samples, verify on the site):
Input:
4
6
3 5 1 4 3 2
LRLLLR
2
2 8
LR
2
3 9
RL
5
1 2 3 4 5
LRLRR

Output:
18
10
0
22
*/

// how to compile g++ -std=gnu++17 -O2 2000D_Right_Left_Wrong.cpp -o main && ./main
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
