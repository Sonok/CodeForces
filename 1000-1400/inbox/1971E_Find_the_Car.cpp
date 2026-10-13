/*
E. Find the Car   (Codeforces Round 944, Div. 4, rated ~1100)
https://codeforces.com/contest/1971/problem/E

time limit per test: 3 seconds
memory limit per test: 256 megabytes

Timur is in a car traveling on the number line from point 0 to point n.
The car starts moving from point 0 at minute 0.

There are k+1 signs on the line at points 0, a_1, a_2, ..., a_k, and
Timur knows that the car will arrive there at minutes 0, b_1, b_2, ...,
b_k, respectively. The sequences a and b are strictly increasing with
a_k = n.

Between any two adjacent signs, the car travels with a constant speed.
Timur has q queries: each query will be an integer d, and Timur wants
you to output how many minutes it takes the car to reach point d,
rounded down to the nearest integer.

Input:
The first line contains a single integer t (1 <= t <= 10^4) — the
number of test cases.
The first line of each test case contains three integers n, k, and q
(k <= n <= 10^9, 1 <= k, q <= 10^5) — the final destination, the number
of points Timur knows the time for, and the number of queries
respectively.
The second line of each test case contains k integers a_i
(1 <= a_i <= n, a_i < a_{i+1} for every 1 <= i <= k-1, a_k = n).
The third line of each test case contains k integers b_i
(1 <= b_i <= 10^9, b_i < b_{i+1} for every 1 <= i <= k-1).
Each of the following q lines contains a single integer d
(0 <= d <= n) — the distance that Timur asks the minutes passed for.
The sum of k over all test cases doesn't exceed 10^5, and the sum of q
over all test cases doesn't exceed 10^5.

Output:
For each query, output a single integer — the number of minutes passed
until the car reaches the point d, rounded down.

Example (official samples, verify on the site):
Input:
4
10 1 3
10
10
0
6
7
10 2 4
4 10
4 7
6
4
2
7
1000000000 1 1
1000000000
1000000000
99999999
6 1 3
6
5
2
6
5

Output:
0 6 7
5 4 2 5
99999999
1 5 4

Note:
For the first test case, the car goes from point 0 to point 10 in 10
minutes, so the speed is 1 unit per minute and:
  - at point 0, the time will be 0 minutes;
  - at point 6, the time will be 6 minutes;
  - at point 7, the time will be 7 minutes.
For the second test case, between points 0 and 4 the car travels at a
speed of 1 unit per minute and between 4 and 10 with a speed of 2 units
per minute and:
  - at point 6, the time will be 5 minutes;
  - at point 4, the time will be 4 minutes;
  - at point 2, the time will be 2 minutes;
  - at point 7, the time will be 5.5 minutes, so the answer is 5.
For the fourth test case, the car travels with 1.2 units per minute, so
the answers to the queries are:
  - at point 2, the time will be 1.66... minutes, so the answer is 1;
  - at point 6, the time will be 5 minutes;
  - at point 5, the time will be 4.16... minutes, so the answer is 4.
*/

// how to compile g++ -std=gnu++17 -O2 1971E_Find_the_Car.cpp -o main && ./main
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
