// how to compile g++ -std=gnu++17 -O2 B.cpp -o main && ./main
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
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        int count = 0;

        ll ret = 0;
        while(count < n) {
            ll total = 0;
            if (count+ k > n) {
                break; // you don't have enoguh to make juice
            }
            for (int i = count; i < count + k; i++) {
                total += a[i];
            }

            count += k;
            if (total >= p) {
                ret += total;
                break;
            }
            ret += p;
            
        }
        for (; count < n; count++) {
            ret += a[count];
        }
        cout << ret << "\n";
    }
    return 0;
}
