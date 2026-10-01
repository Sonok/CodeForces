/*
C. Splitting Items   (Educational Codeforces Round 169, rated ~1200)
https://codeforces.com/contest/2004/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Alice and Bob have n items they'd like to split between them, so they
decided to play a game. All items have a cost, and the i-th item costs
a_i. Players move in turns starting from Alice.

In each turn, the player chooses one of the remaining items and takes
it. The game goes on until no items are left.

Let's say that A is the total cost of items taken by Alice and B is the
total cost of Bob's items. The resulting score of the game then will be
equal to A - B.

Alice wants to maximize the score, while Bob wants to minimize it. Both
Alice and Bob will play optimally.

But the game will take place tomorrow, so today Bob can modify the
costs a little. He can increase the costs a_i of several (possibly none
or all) items by an integer value (possibly, by the same value or by
different values for each item). However, the total increase must be
less than or equal to k. Otherwise, Alice may suspect something. Note
that Bob can't decrease costs, only increase.

What is the minimum possible score Bob can achieve?

Input:
The first line contains t (1 <= t <= 5000) — the number of test cases.
Each test case has two lines:
  n and k (2 <= n <= 2*10^5; 0 <= k <= 10^9)
  a_1 ... a_n (1 <= a_i <= 10^9)
The sum of n over all test cases does not exceed 2*10^5.

Output:
For each test case print a single integer — the minimum possible score
A - B after Bob increases the costs of several (possibly none or all)
items.

Example (official samples):
Input:
4
2 5
1 10
3 0
10 15 12
4 6
3 1 2 4
2 4
6 9

Output:
4
13
0
0
*/

// how to compile g++ -std=gnu++17 -O2 2004C_Splitting_Items.cpp -o main && ./main
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
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
