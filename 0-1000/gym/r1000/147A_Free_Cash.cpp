/*
A. Free Cash

time limit per test2 seconds
memory limit per test256 megabytes

Valera runs a 24/7 fast food cafe. He magically learned that next day n people will visit his cafe. For each person we know the arrival time: the i-th person comes exactly at hi hours mi minutes. The cafe spends less than a minute to serve each client, but if a client comes in and sees that there is no free cash, than he doesn't want to wait and leaves the cafe immediately.

Valera is very greedy, so he wants to serve all n customers next day (and get more profit). However, for that he needs to ensure that at each moment of time the number of working cashes is no less than the number of clients in the cafe.

Help Valera count the minimum number of cashes to work at his cafe next day, so that they can serve all visitors.

Input

The first line contains a single integer n (1 ≤ n ≤ 10^5), that is the number of cafe visitors.

Each of the following n lines has two space-separated integers hi and mi (0 ≤ hi ≤ 23; 0 ≤ mi ≤ 59), representing the time when the i-th person comes into the cafe.

Note that the time is given in the chronological order. All time is given within one 24-hour period.

Output

Print a single integer — the minimum number of cashes, needed to serve all clients next day.

Examples

InputCopy
4
8 0
8 10
8 10
8 45

OutputCopy
2

InputCopy
3
0 12
10 11
22 22

OutputCopy
1

Note

In the first sample it is not enough one cash to serve all clients, because two visitors will come into cafe in 8:10. Therefore, if there will be one cash in cafe, then one customer will be served by it, and another one will not wait and will go away.

In the second sample all visitors will come in different times, so it will be enough one cash
*/

// how to compile g++ -std=gnu++17 -O2 147A_Free_Cash.cpp -o main && ./main
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

    int n; cin >> n;
    vector<pair<int, int>> vec(n);

    for(int i = 0; i < n; i++) cin >> vec[i].first >> vec[i].second;
    int maxWork = 1;
    int i = 0;
    while(i < n) {
        int j = i+1; // start a running count
        for(; j < n; j++) {
            if (vec[i] != vec[j]) break;
        }
        maxWork = max(maxWork, j-i);
        i = j;
    }
    cout << maxWork;
    return 0;
}
