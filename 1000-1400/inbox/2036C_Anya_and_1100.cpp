/*
C. Anya and 1100   (Codeforces Round 984, Div. 3, rated ~1100)
https://codeforces.com/contest/2036/problem/C

time limit per test: 3 seconds
memory limit per test: 256 megabytes

While rummaging through things in a distant drawer, Anya found a beautiful
string s consisting only of zeros and ones.

Now she wants to make it even more beautiful by performing q operations
on it.

Each operation is described by two integers i (1 <= i <= |s|) and
v (v in {0, 1}) and means that the i-th character of the string is
assigned the value v (that is, the assignment s_i = v is performed).

But Anya loves the number 1100, so after each query, she asks you to
tell her whether the substring "1100" is present in her string (i.e.
there exist such 1 <= i <= |s| - 3 that s_i s_{i+1} s_{i+2} s_{i+3} = "1100").

Input:
The first line contains one integer t (1 <= t <= 10^4) — the number of
test cases.
The first line of each test case contains the string s
(1 <= |s| <= 2 * 10^5), consisting only of the characters "0" and "1".
Here |s| denotes the length of the string s.
The next line contains an integer q (1 <= q <= 2 * 10^5) — the number of
queries.
The following q lines contain two integers i (1 <= i <= |s|) and
v (v in {0, 1}), describing the query.
It is guaranteed that the sum of |s| across all test cases does not
exceed 2 * 10^5. It is also guaranteed that the sum of q across all test
cases does not exceed 2 * 10^5.

Output:
For each query, output "YES" if "1100" is present in Anya's string;
otherwise, output "NO".
You can output the answer in any case (upper or lower). For example,
the strings "yEs", "yes", "Yes", and "YES" will be recognized as
positive responses.

Example (official samples, verify on the site):
Input:
4
100
4
1 1
2 0
2 0
3 1
1100000
3
6 1
7 1
4 1
111010
4
1 1
5 0
4 1
5 0
0100
4
3 1
1 1
2 0
2 1

Output:
NO
NO
NO
NO
YES
YES
NO
NO
YES
YES
YES
NO
NO
NO
NO
NO
*/

// how to compile g++ -std=gnu++17 -O2 2036C_Anya_and_1100.cpp -o main && ./main
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
