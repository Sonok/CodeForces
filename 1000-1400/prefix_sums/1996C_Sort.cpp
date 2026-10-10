/*
C. Sort   (Codeforces Round 962, Div. 3, rated ~1300)
https://codeforces.com/contest/1996/problem/C

time limit per test: 5 seconds
memory limit per test: 256 megabytes

You are given two strings a and b of length n. Then, you are (forced
against your will) to answer q queries.

For each query, you are given a range bounded by l and r. In one
operation, you can choose an integer i (l <= i <= r) and set a_i = x
where x is any character you desire. Output the minimum number of
operations you must perform such that sorted(a[l..r]) = sorted(b[l..r]).
The operations you perform on one query do not affect other queries.

For an arbitrary string c, sorted(c[l..r]) denotes the substring
consisting of characters c_l, c_{l+1}, ..., c_r sorted in
lexicographical order.

Input:
The first line contains t (1 <= t <= 1000) — the number of test cases.
The first line of each test case contains two integers n and q
(1 <= n, q <= 2*10^5) — the length of both strings and the number of
queries.
The following line contains a of length n. It is guaranteed a only
contains lowercase latin letters.
The following line contains b of length n. It is guaranteed b only
contains lowercase latin letters.
The following q lines contain two integers l and r (1 <= l <= r <= n)
— the range of the query.
It is guaranteed the sum of n and q over all test cases does not exceed
2*10^5.

Output:
For each query, output an integer, the minimum number of operations you
need to perform in a new line.

Example (official samples, verify on the site):
Input:
3
5 3
abcde
edcba
1 5
1 4
3 3
4 2
zzde
azbe
1 3
1 4
6 3
uwuwuw
wuwuwu
2 4
1 3
1 6

Output:
0
1
0
2
2
1
1
0

Note (first test case): for the first query, sorted(a[1..5]) = abcde
and sorted(b[1..5]) = abcde, so no operations are necessary. For the
second query, you need to set a_1 = e. Then sorted(a[1..4]) = bcde and
sorted(b[1..4]) = bcde.
*/

// how to compile g++ -std=gnu++17 -O2 1996C.cpp -o main && ./main
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
#include <cstdio>
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

void solve(string &a, string &b, vector<pair<int,int>> &queries) {
    int n = a.size();
    vector<vector<int>> prefixA(26, vector<int>(n+1, 0));
    vector<vector<int>> prefixB(26, vector<int>(n+1, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 26; j++) {
            prefixA[j][i+1] = prefixA[j][i];
            prefixB[j][i+1] = prefixB[j][i];
        }
        prefixA[a[i] - 'a'][i+1] = prefixA[a[i] - 'a'][i] + 1;
        prefixB[b[i] - 'a'][i+1] = prefixB[b[i] - 'a'][i] + 1;
    }

    for(auto& [l, r] : queries) {
        int total = 0;
        for(int i = 0; i < 26; i++) {
            int countA = prefixA[i][r] - prefixA[i][l-1];
            int countB = prefixB[i][r] - prefixB[i][l-1];
            total += abs(countA - countB);
        }
        cout << total / 2 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n, q; string a, b;
        cin >> n >> q >> a >> b;

        vector<pair<int, int>> queries(q);
        for(auto& q : queries) {
            cin >> q.first >> q.second;
        }
        solve(a, b, queries);
    }
    return 0;
}
