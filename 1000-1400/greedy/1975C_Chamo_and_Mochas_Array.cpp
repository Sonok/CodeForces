/*
C. Chamo and Mocha's Array   (Codeforces Round 947, Div. 1 + Div. 2, rated ~1200)
https://codeforces.com/contest/1975/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Mocha likes arrays, so before her departure, Chamo gave her an array a
consisting of n positive integers as a gift.

Mocha doesn't like arrays containing different numbers, so Mocha decides to
use magic to change the array. Mocha can perform the following three-step
operation some (possibly, zero) times:
  1. Choose indices l and r (1 <= l < r <= n).
  2. Let x be the median of the subarray [a_l, a_{l+1}, ..., a_r].
  3. Set all values a_l, a_{l+1}, ..., a_r to x.

Suppose a = [1, 2, 3, 4, 5] initially:
  - If Mocha chooses (l, r) = (3, 4) in the first operation, then x = 3, the
    array will be changed into a = [1, 2, 3, 3, 5].
  - If Mocha chooses (l, r) = (1, 3) in the first operation, then x = 2, the
    array will be changed into a = [2, 2, 2, 4, 5].

Mocha will perform the operation until the array contains only the same
number. Mocha wants to know what is the maximum possible value of this
number.

The median in an array b of length m is an element that occupies position
number floor((m + 1) / 2) after we sort the elements in non-decreasing
order. For example, the median of [3, 1, 4, 1, 5] is 3 and the median of
[5, 25, 20, 24] is 20.

Input:
Each test contains multiple test cases. The first line contains the number
of test cases t (1 <= t <= 500). The description of the test cases follows.
The first line of each test case contains a single integer n
(2 <= n <= 10^5) — the length of the array a.
The second line of each test case contains n integers a_1, a_2, ..., a_n
(1 <= a_i <= 10^9) — the elements of the array a.
It is guaranteed that the sum of n over all test cases does not exceed
10^5.

Output:
For each test case, output the maximum value of the number.

Example (from memory, verify on the site):
Input:
2
2
1 2
5
1 2 3 4 5

Output:
1
4

Note:
In the first test case, a = [1, 2]. Mocha can only choose the interval
(l, r) = (1, 2). The array will be changed to a = [1, 1]. Therefore, the
answer is 1.
In the second test case, Mocha can perform the following operations:
  - Choose the interval (l, r) = (4, 5), then a = [1, 2, 3, 4, 4].
  - Choose the interval (l, r) = (3, 5), then a = [1, 2, 4, 4, 4].
  - Choose the interval (l, r) = (1, 5), then a = [4, 4, 4, 4, 4].
The array contains only the same number, which is 4. It can be proven that
the maximum value of the final number cannot be greater than 4.
*/

// how to compile g++ -std=gnu++17 -O2 1975C_Chamo_and_Mochas_Array.cpp -o main && ./main
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
    	int largest = 0;
    	int second = 0;

    	int n; cin >> n;
		int best = 0; // best seen so far

    	vector<int> v(n); 
		for(int i = 0; i < n; i++) cin >> v[i];

		for(int i = 0; i < n - 2; i++) {
			int mid = max(min(v[i], v[i+1]), min(max(v[i], v[i+1]), v[i+2]));
			best = max(best, mid);
		}
		if (n == 2) best = min(v[0], v[1]);
		cout << best << "\n"; 


    }
    return 0;
}
