/*
C. Sending Messages   (Codeforces Round 920 Div. 3, rated ~1000)
https://codeforces.com/contest/1921/problem/C

time limit per test: 1 second
memory limit per test: 256 megabytes

Stepan is a very busy person. Today he needs to send n messages at
moments m_1 < m_2 < ... < m_n. Unfortunately, by the moment 0, his
phone only has f units of charge left. At the moment 0, the phone is
turned on.

The phone loses a units of charge for each unit of time it is turned
on. Also, at any moment, Stepan can turn off the phone and turn it on
later. This action consumes b units of energy each time. Consider
turning on and off to be instantaneous, so you can turn it on at moment
x and send a message at the same moment, and vice versa, send a message
at moment x and turn off the phone at the same moment.

If at any point the charge level drops to 0 (becomes <= 0), it is
impossible to send a message at that moment.

Since all messages are very important to Stepan, he wants to know if he
can send all the messages without the possibility of charging the phone.

Input:
The first line contains t (1 <= t <= 10^4) — the number of test cases.
Each test case has two lines:
  n, f, a, b   (1 <= n <= 2*10^5; 1 <= f, a, b <= 10^9)
  m_1 ... m_n  (1 <= m_i <= 10^9, strictly increasing)
The sum of n over all test cases does not exceed 2*10^5.

Output:
For each test case print YES if Stepan can send all messages, NO otherwise.

Examples (first five sample cases, verify the rest on the problem page):
Input:
5
1 3 1 5
3
7 21 1 3
4 6 10 13 17 20 26
5 10 1 2
1 2 3 4 5
1 1000000000 1000000000 1000000000
1000000000
3 11 9 6
6 8 10

Output:
NO
YES
YES
NO
NO
*/

// how to compile g++ -std=gnu++17 -O2 1921C_Sending_Messages.cpp -o main && ./main
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
        ll n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<int> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];

        // phone is on at moment 0, so the first gap is [0, vec[0]]
        // between moment i and i+1 it costs either b (off then on) or a*(m[i+1]-m[i]) (stay on)

        f -= min(a * vec[0], b);
        int i = 0;

        while(f > 0 && i+1 < n) {
            // assume i is done.
            ll keepOn =  a * (vec[i+1] - vec[i]);
            ll turnOn = b;

            f -= min(turnOn, keepOn);
            i++;
        }
        bool ok = (i == n - 1 && f > 0);
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
