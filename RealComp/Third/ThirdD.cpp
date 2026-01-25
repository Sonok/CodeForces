// how to compile g++ -std=gnu++17 -O2 ThirdD.cpp -o main && ./main
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



int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;         
    while (t--) {
        int n;
        cin >> n;
        
        map<int,int> cnt;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            cnt[x]++;
        }

        vector<long long> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        // prefix sums of b
        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++) pref[i + 1] = pref[i] + b[i];

        // Build suffix cumulative counts over map keys:
        map<int,long long> ge;
        long long run = 0;
        for (auto it = cnt.rbegin(); it != cnt.rend(); ++it) {
            run += it->second;
            ge[it->first] = run;
        }

        long long ans = 0;
        for (auto &[x, fx] : cnt) {
            long long swings = ge[x];

            // max k such that pref[k] <= swings
            int k = int(upper_bound(pref.begin(), pref.end(), swings) - pref.begin()) - 1;
            ans = max(ans, 1LL * k * x);
        }

        cout << ans << "\n";
    }
    return 0;
}
