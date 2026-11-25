/*
C. Sakurako's Field Trip   (Codeforces Round 981, Div. 3, rated ~1400)
https://codeforces.com/contest/2033/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Even in university, students need to relax. That is why Sakurako's teacher
decided to go on a field trip. It is known that all of the students will be
walking in one line. The student with index i has some topic of interest
which is described as a_i. As a teacher, you want to minimise the
disturbance of the line of students.

The disturbance of the line is defined as the number of neighbouring people
with the same topic of interest. In other words, disturbance is the number
of indices j (1 <= j < n) such that a_j = a_{j+1}.

In order to do this, you can choose index i (1 <= i <= n) and swap students
at positions i and n-i+1. You can perform any number of swaps.

Your task is to determine the minimal amount of disturbance that you can
achieve by doing the operation described above any number of times.

Input:
The first line contains one integer t (1 <= t <= 10^4) — the number of test
cases.
Each test case is described by two lines.
  - The first line contains one integer n (2 <= n <= 10^5) — the length of
    the line of students.
  - The second line contains n integers a_i (1 <= a_i <= n) — the topics of
    interest of students in line.
It is guaranteed that the sum of n across all test cases does not exceed
2 * 10^5.

Output:
For each test case, output the minimal possible disturbance of the line
that you can achieve.

Example (from memory, verify on the site):
Input:
9
5
1 1 1 2 3
6
2 1 2 2 1 1
4
1 2 1 1
6
2 1 1 2 2 4
4
2 1 2 3
6
1 2 2 1 2 1
5
4 5 5 1 5
7
1 4 3 5 1 1 3
7
3 1 3 2 2 3 3

Output:
1
2
1
0
0
1
1
0
2

Note:
In the first example, it is necessary to apply the operation to i=2, thus
the array will become [1, 2, 1, 1, 3]. The disturbance of this array is
equal to 1.
In the fourth example, it is sufficient to apply the operation to i=3, thus
the array will become [2, 1, 2, 1, 2, 4]. The disturbance of this array is
equal to 0.
*/

// how to compile g++ -std=gnu++17 -O2 2033C_Sakurakos_Field_Trip.cpp -o main && ./main
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

// NOT MY OWN SOLVE. Retired 2026-11-25 after many hints; this is the reference
// solution I was shown. Not submitted, so it does not count toward the 200.
// Idea: position i only trades with j = n-1-i, so the array is nested pairs.
// Go from the outside in. The pair outside (a[i-1], a[j+1]) is already final,
// so count the clashes with it if pair i stays and if it swaps, keep the smaller.
// Greedy is safe because the cost between two neighbouring pairs depends only on
// whether they face the same way or opposite ways, and the inner pair can always
// pick either, whatever the outer pair did.
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 1; i < n / 2; i++) {
        int j = n - 1 - i;
        int keep    = (a[i] == a[i-1]) + (a[j] == a[j+1]);
        int swapped = (a[j] == a[i-1]) + (a[i] == a[j+1]);
        if (swapped < keep) swap(a[i], a[j]);
    }

    int ans = 0;
    for (int i = 0; i + 1 < n; i++) ans += (a[i] == a[i+1]);
    cout << ans << "\n";
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
