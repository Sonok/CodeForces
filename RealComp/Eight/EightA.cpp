// how to compile g++ -std=gnu++17 -O2 EightA.cpp -o main && ./main
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
        map<int, int> m;
        for(int i = 0; i < n * n; i++) {
            int x; cin >> x;
            m[x] += 1;
        }
        bool flag = true;
        for (auto pair : m) {
            if(pair.second > n * (n-1)) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
