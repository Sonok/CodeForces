// how to compile g++ -std=gnu++17 -O2 FactoryMachines.cpp -o main && ./main
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

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n, t;
    cin >> n >> t;          

    ll l = 0; // takes 0 minutes
    ll r =  INF; 
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    ll time = INF;
    while(l <= r) {
        ll mid = (l + r) / 2;
        // we do a simulation after
        ll total = 0;
        for(int i = 0; i < n; i++) {
            total += mid / v[i];
            if (total >= t) break;
        }
        if (total >= t) {
            time = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << time;
    return 0;
}
