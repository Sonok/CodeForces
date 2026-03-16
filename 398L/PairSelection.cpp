// how to compile g++ -std=gnu++17 -O2 PairSelection.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iomanip>
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

double op(const vector<pair<int, int>>& v) {
    ll top = 0; 
    ll bottom = 0;
    for(int i = 0; i < v.size(); i++) {
        top += v[i].first;
        bottom += v[i].second;
    }
    return (1.0 * top) / bottom;
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n, k;
    cin >> n >> k;
    double maxVal = 0.0;

    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    vector<int> m(n);
    fill(m.begin(), m.begin()+k, 1);

    do {
        vector<pair<int, int>> chosen;

        for (int i = 0; i < n; i++) {
            if (m[i]) {
                chosen.push_back(v[i]);
            }
        }
        maxVal = max(maxVal, op(chosen));

    } while(prev_permutation(m.begin(), m.end()));
    cout << fixed << setprecision(10) << maxVal << '\n';
    return 0;
}
