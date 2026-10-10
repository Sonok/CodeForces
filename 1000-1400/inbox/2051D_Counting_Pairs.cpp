/*
D. Counting Pairs   (Codeforces Round 994, Div. 2, rated ~1200)
https://codeforces.com/contest/2051/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

You are given a sequence a, consisting of n integers, where the i-th
element of the sequence is equal to a_i. You are also given two integers
x and y (x <= y).

A pair of integers (i, j) is considered interesting if the following
conditions are met:
  - 1 <= i < j <= n;
  - if you simultaneously remove the elements at positions i and j from
    the sequence a, the sum of the remaining elements is at least x and
    at most y.

Your task is to determine the number of interesting pairs of integers
for the given sequence a.

Input:
The first line contains one integer t (1 <= t <= 10^4) — the number of
test cases.
Each test case consists of two lines:
  - The first line contains three integers n, x, y
    (3 <= n <= 2*10^5, 1 <= x <= y <= 2*10^14);
  - The second line contains n integers a_1, a_2, ..., a_n
    (1 <= a_i <= 10^9).
Additional constraint on the input: the sum of n across all test cases
does not exceed 2*10^5.

Output:
For each test case, output one integer — the number of interesting
pairs of integers for the given sequence a.

Example (official samples, verify on the site):
Input:
7
4 8 10
4 6 3 6
6 22 27
4 9 6 3 4 5
3 8 10
3 2 1
3 1 1
2 3 4
3 3 6
3 2 1
4 4 12
3 3 2 1
6 8 8
1 1 2 2 2 3

Output:
4
7
0
0
1
5
6

Note:
In the first example, there are 4 interesting pairs of integers:
(1, 2), (1, 4), (2, 3), (3, 4).
*/

// how to compile g++ -std=gnu++17 -O2 2051D_Counting_Pairs.cpp -o main && ./main
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
