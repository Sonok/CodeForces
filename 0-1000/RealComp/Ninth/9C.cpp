// how to compile g++ -std=gnu++17 -O2 9C.cpp -o main && ./main
// I did not solve this problem unfortunately 
// trying to do upsolving
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
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

int solve(int n, string& a, string& b) {
    vector<int> dp(n+1);
    dp[1] = (a[0] != b[0]); // means we repaint if one off when n = 1
    for(int i = 2; i <= n; i++) {
        int takeV = (a[i-1] != b[i-1]) + dp[i-1];
        int takeH = (a[i-1] != a[i-2]) +  (b[i-1] != b[i-2]) + dp[i-2];
        dp[i] = min(takeV, takeH);
    }
    return dp[n];
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;
        cout << solve(n, a, b) << "\n";
    }
    return 0;
}
