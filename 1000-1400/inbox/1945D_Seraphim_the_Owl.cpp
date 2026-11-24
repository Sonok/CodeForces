/*
D. Seraphim the Owl   (Codeforces Round 935, Div. 3, rated ~1300)
https://codeforces.com/contest/1945/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

The guys lined up in a queue of n people, starting with person number i = 1,
to ask Serafim the Owl about the meaning of life. Unfortunately, Kirill was
very busy writing the legend for this problem, so he arrived a little later
and stood at the end of the line after the n-th person. Kirill is completely
dissatisfied with this situation, so he decided to bribe some people ahead
of him.

For the i-th person in the queue, Kirill knows two values: a_i and b_i. If
at the moment Kirill is standing at position i, then he can choose any
position j such that j < i and exchange places with the person at position
j. In this case, Kirill will have to pay him a_j coins. And for each k such
that j < k < i, Kirill will have to pay b_k coins to the person at position
k. Kirill can perform this action any number of times.

Kirill is thrifty, so he wants to spend as few coins as possible, but he
doesn't want to wait too long, so Kirill believes he should be among the
first m people in line.

Help Kirill determine the minimum number of coins he will have to spend in
order to not wait too long.

Input:
Each test consists of several sets of input data. The first line contains a
single integer t (1 <= t <= 10^4) — the number of test cases. Then follows
the description of the test case.
The first line of each test case contains two integers n and m
(1 <= m <= n <= 200000) — the number of people in the queue besides Kirill
and the maximum allowable final position of Kirill, respectively.
The second line contains n integers a_1, a_2, ..., a_n (1 <= a_i <= 10^9).
The third line contains n integers b_1, b_2, ..., b_n (1 <= b_i <= 10^9).
It is guaranteed that the sum of the values of n over all test cases does
not exceed 2 * 10^5.

Output:
For each test case, output a single integer — the minimum number of coins
Kirill needs to spend.

Example (from memory, verify on the site):
Input:
4
4 2
7 3 6 9
4 3 8 5
6 2
6 9 7 1 8 3
5 8 8 1 4 1
7 7
7 2 9 2 6 5 9
9 1 10 7 1 4 9
2 1
2 3
1 1

Output:
14
22
9
3
*/

// how to compile g++ -std=gnu++17 -O2 1945D_Seraphim_the_Owl.cpp -o main && ./main
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
