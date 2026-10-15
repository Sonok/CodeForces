/*
B. AND Reconstruction   (Pinely Round 4, Div. 1 + Div. 2, rated ~1100)
https://codeforces.com/contest/1991/problem/B

time limit per test: 2 seconds
memory limit per test: 256 megabytes

You are given an array b of n - 1 integers.

An array a of n integers is called good if b_i = a_i & a_{i+1} for
1 <= i <= n - 1, where & denotes the bitwise AND operator.

Construct a good array, or report that no good arrays exist.

Input:
The first line of the input contains a single integer t (1 <= t <= 10^4)
— the number of test cases. The description of the test cases follows.
The first line of each test case contains a single integer n
(2 <= n <= 10^5) — the length of the array a.
The second line of each test case contains n - 1 integers
b_1, b_2, ..., b_{n-1} (0 <= b_i < 2^30) — the elements of the array b.
It is guaranteed that the sum of n over all test cases does not exceed
10^5.

Output:
For each test case, output a single integer -1 if no good arrays exist.
Otherwise, output n space-separated integers a_1, a_2, ..., a_n
(0 <= a_i <= 2^30) — the elements of a good array a.
If there are multiple solutions, you may output any of them.

Example (official samples, verify on the site):
Input:
4
2
1
3
2 0
4
1 2 3
5
3 5 4 2

Output:
5 3
3 2 1
-1
3 7 5 6 3

Note:
In the first test case, b = [1]. A possible good array is a = [5, 3],
because a_1 & a_2 = 5 & 3 = 1 = b_1.
In the second test case, b = [2, 0]. A possible good array is
a = [3, 2, 1], because 3 & 2 = 2 = b_1 and 2 & 1 = 0 = b_2.
In the third test case, b = [1, 2, 3]. It can be shown that no good
arrays exist, so the output is -1.
In the fourth test case, b = [3, 5, 4, 2]. A possible good array is
a = [3, 7, 5, 6, 3].
*/

// how to compile g++ -std=gnu++17 -O2 1991B_AND_Reconstruction.cpp -o main && ./main
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
        // clearly fit integers  
        int n; cin >> n;
        vector<int> b(n-1);
        vector<int> a(n);
        for(int i=0; i<n-1; i++) cin >> b[i];

        int num = b[0];
        a[0] = b[0];

        bool flag = true; // found it's cool 

        for (int i = 1; i <= n-1; i++) {
            a[i] = b[i-1] | b[i];
        }
        a[n-1] = b[n-2];

        for(int i = 0; i < n-1; i++) {
            if((a[i] & a[i+1]) != b[i]) {
                flag = false;
                break;
            }
        }
        if(!flag) {
            cout << -1 << "\n";
            continue;
        }

        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
