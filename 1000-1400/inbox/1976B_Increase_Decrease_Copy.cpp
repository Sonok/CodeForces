/*
B. Increase/Decrease/Copy   (Educational Codeforces Round 166, Div. 2, rated ~1200)
https://codeforces.com/contest/1976/problem/B

time limit per test: 2 seconds
memory limit per test: 256 megabytes

You are given two integer arrays: array a of length n and array b of
length n+1.

You can perform the following operations any number of times in any order:
  - choose any element of the array a and increase it by 1;
  - choose any element of the array a and decrease it by 1;
  - choose any element of the array a, copy it and append the copy to the
    end of the array a.

Your task is to calculate the minimum number of operations required to make
the array a equal to the array b. It can be shown that it is always
possible.

Input:
The first line contains a single integer t (1 <= t <= 10^4) — the number of
test cases.
The first line of each test case contains a single integer n
(1 <= n <= 2 * 10^5) — the length of the array a.
The second line contains n integers a_1, a_2, ..., a_n (1 <= a_i <= 10^9).
The third line contains n+1 integers b_1, b_2, ..., b_{n+1}
(1 <= b_i <= 10^9).
Additional constraint on the input: the sum of n over all test cases does
not exceed 2 * 10^5.

Output:
For each test case, print a single integer — the minimum number of
operations required to make the array a equal to the array b.

Example (from memory, verify on the site):
Input:
3
1
2
1 3
2
3 3
3 3 3
4
4 2 1 2
2 1 5 2 3

Output:
3
1
8

Note:
In the first test case: copy the 2 (a = [2, 2]), then decrease the first
element once and increase the second once.
*/

// how to compile g++ -std=gnu++17 -O2 1976B_Increase_Decrease_Copy.cpp -o main && ./main
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
