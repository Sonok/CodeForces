/*
D. Test of Love   (Codeforces Round 957, Div. 3, rated ~1200)
https://codeforces.com/contest/1992/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

ErnKor is ready to do anything for Julen, even to swim through
crocodile-infested swamps. We decided to test this love. ErnKor will have to
swim across a river with a width of 1 meter and a length of n meters.

The river is very cold. Therefore, in total (that is, throughout the entire
swim from 0 to n+1) ErnKor can swim in the water for no more than k meters.
For the sake of humanity, we have added not only crocodiles to the river,
but also logs on which he can jump. Our test is as follows:

Initially, ErnKor is on the left bank and needs to reach the right bank.
They are located at the 0 and n+1 meters respectively. The river can be
represented as n segments, each with a length of 1 meter. Each segment
contains either a log 'L', a crocodile 'C', or just water 'W'. ErnKor can
move as follows:
  - If he is on the surface (i.e., on the bank or on a log), he can jump
    forward for no more than m (1 <= m <= 10) meters (he can jump on the
    bank, on a log, or in the water).
  - If he is in the water, he can only swim to the next river segment (or
    to the bank if he is at the n-th meter).
  - ErnKor cannot land in a segment with a crocodile in any way.

Determine if ErnKor can reach the right bank.

Input:
The first line contains a single integer t (1 <= t <= 10^4) — the number of
test cases.
The first line of each test case contains three numbers n, m, k
(0 <= k <= 2 * 10^5, 1 <= n <= 2 * 10^5, 1 <= m <= 10) — the length of the
river, the distance ErnKor can jump, and the number of meters ErnKor can
swim without freezing.
The second line of each test case contains a string a of length n. a_i
denotes the object located at the i-th meter (a_i is one of 'W', 'C', 'L').
It is guaranteed that the sum of n over all test cases does not exceed
2 * 10^5.

Output:
For each test case, output "YES" if ErnKor can pass the test, and output
"NO" otherwise. You can output the answer in any case (upper or lower).

Example (from memory, verify on the site):
Input:
6
6 2 0
LWLLLW
6 1 1
LWLLLL
6 1 1
LWLLWL
6 2 15
LWLLCC
6 10 0
CCCCCC
6 6 1
WCCCCW

Output:
YES
YES
NO
NO
YES
YES

Note:
First example: we jump from the shore to the first log (0 -> 1), from the
first log to the second (1 -> 3), from the second to the fourth (3 -> 5),
and from the last log to the shore (5 -> 7). So, we have
0 -> 1 -> 3 -> 5 -> 7. Since we did not encounter a crocodile and swam no
more than k meters, the answer is YES.
Second example: 0 -> 1, we jump into the water from the first log (1 -> 2),
swim a cell to the log (2 -> 3), then 3 -> 4 -> 5 -> 6 -> 7. Since we swam
no more than k meters, the answer is YES.
In the third example, ErnKor needs to swim two cells 'W', but can only swim
one. Therefore, the answer is NO.
Sixth example: we jump from the shore into the water (0 -> 6) and swim one
cell in the water (6 -> 7). Since we did not encounter a crocodile and swam
no more than k meters, the answer is YES.
*/

// how to compile g++ -std=gnu++17 -O2 1992D_Test_of_Love.cpp -o main && ./main
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
