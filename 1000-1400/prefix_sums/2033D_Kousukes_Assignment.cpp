/*
D. Kousuke's Assignment   (Codeforces Round 981, Div. 3, rated ~1300)
https://codeforces.com/contest/2033/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

After a trip with Sakurako, Kousuke was very scared because he forgot about
his programming assignment. In this assignment, the teacher gave him an
array a of n integers and asked him to calculate the number of
non-overlapping segments of the array a, such that each segment is
considered beautiful.

A segment [l, r] is considered beautiful if
a_l + a_{l+1} + ... + a_{r-1} + a_r = 0.

For a fixed array a, your task is to compute the maximum number of
non-overlapping beautiful segments.

Input:
The first line of input contains the number t (1 <= t <= 10^4) — the number
of test cases. Each test case consists of 2 lines.
The first line contains one integer n (1 <= n <= 10^5) — the length of the
array.
The second line contains n integers a_i (-10^5 <= a_i <= 10^5) — the
elements of the array a.
It is guaranteed that the sum of n across all test cases does not exceed
3 * 10^5.

Output:
For each test case, output a single integer: the maximum number of
non-overlapping beautiful segments.

Example (from memory, verify on the site):
Input:
3
5
2 1 -3 2 1
7
12 -4 4 43 -3 -5 8
6
0 -4 0 3 0 1

Output:
1
2
3
*/

// how to compile g++ -std=gnu++17 -O2 2033D_Kousukes_Assignment.cpp -o main && ./main
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
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<ll> prefix(n+1, 0);
        map<ll, int> counter;

        int count = 0;
        int cutoff = 0;
        // this is the cutoff index

        for(int i = 1; i <= n; i++) {
            prefix[i] = prefix[i-1] + a[i-1];
            counter[prefix[i] - prefix[cutoff]]++;

            // how to sucessfully find a beautfil segment
            // when prefix[i] = 0 or prefix[i] = prefix[j] where j < i
            // or when a[i-1] = 0 

            if (prefix[i] == prefix[cutoff] || counter[prefix[i] - prefix[cutoff]] > 1 || a[i-1] == 0) {
                counter.clear();
                cutoff = i; // u have a valid segment
                count++;
            }

        }
        cout << count << "\n";

    }
    return 0;
}
