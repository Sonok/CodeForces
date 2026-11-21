/*
C. Uninteresting Number   (Codeforces Round 991, Div. 3, rated ~1200)
https://codeforces.com/contest/2050/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

You are given a number n with a length of no more than 10^5.

You can perform the following operation any number of times: choose one of
its digits, square it, and replace the original digit with the result. The
result must be a digit (that is, if you choose the digit x, then the value
of x^2 must be less than 10).

Is it possible to obtain a number that is divisible by 9 through these
operations?

Input:
The first line contains an integer t (1 <= t <= 10^4) — the number of test
cases.
The only line of each test case contains the number n, without leading
zeros. The length of the number does not exceed 10^5.
It is guaranteed that the sum of the lengths of the numbers across all test
cases does not exceed 10^5.

Output:
For each test case, output "YES" if it is possible to obtain a number
divisible by 9 using the described operations, and "NO" otherwise.
You can output each letter in any case (lowercase or uppercase).

Example (from memory, verify on the site):
Input:
9
123
322
333333333333
9997
5472778912773
1234567890
23
33
52254522632

Output:
NO
YES
YES
NO
NO
YES
NO
YES
YES

Note:
In the first example, from the integer 123, it is possible to obtain only
123, 143, 129, and 149, none of which are divisible by 9.
In the second example, you need to replace the second digit with its
square; then n will equal 342 = 38 * 9.
In the third example, the integer is already divisible by 9.
*/

// how to compile g++ -std=gnu++17 -O2 2050C_Uninteresting_Number.cpp -o main && ./main
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



int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        string n; cin >> n;
        int total = 0;
        int count2 = 0; int count3 = 0;
        // you can only change number w 2 and 3 0,1 same 4-9 useless

        for (char c : n) {
            total += c - '0';
            if (c - '0' == 2) count2++;
            if (c - '0' == 3) count3++;
        }
        // 4-2 = 2 and 9-3 = 6 
        bool found = false; // no divisible by 9 

        for(int i = 0; i <= count2 && !found; i++) {
            for (int j = 0; j <= count3; j++) {
                if ((total + 2 * i + 6 * j) % 9 == 0) {
                    found = true;
                    break;
                }
            }
        }
        
        cout << (found ? "YES\n" :  "NO\n");
    }
    return 0;
}
