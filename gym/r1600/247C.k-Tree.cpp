// how to compile g++ -std=gnu++17 -O2 247C.k-Tree.cpp -o main && ./main
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

int k; // what type of tree
int d; // min to be seem
unordered_map<int, ll> memo;

// key = 
ll countWays(int n, bool seen) {
    if(n < 0) {
        return 0;
    }
    if(n == 0) return seen;
    int key = n * 2 + seen;
    if(memo.count(key)) {
        return memo[key];
    }
    for(int i = 1; i <= k; i++) {
        bool newSeen = seen || (i >= d);
        memo[key] = (memo[key] + countWays(n - i, newSeen)) % MOD;
    }
    return memo[key];
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n;
    cin >> n >> k >> d;
    ll ways = countWays(n, false);
    cout << ways % MOD;
    return 0;
}
