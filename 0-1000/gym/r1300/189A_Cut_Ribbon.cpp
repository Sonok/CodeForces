// how to compile g++ -std=gnu++17 -O2 189A_Cut_Ribbon.cpp -o main && ./main
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

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n+1, -1); //
    dp[0]=0;
    for(int i = min({a, b, c}); i <= n; i++) {
        if(i >= a && dp[i-a] != -1) dp[i] = max(dp[i], dp[i-a] + 1);
        if(i >= b && dp[i-b] != -1) dp[i] = max(dp[i], dp[i-b] + 1);
        if(i >= c && dp[i-c] != -1) dp[i] = max(dp[i], dp[i-c] + 1);
    }
    cout << dp[n];
    return 0;
}
