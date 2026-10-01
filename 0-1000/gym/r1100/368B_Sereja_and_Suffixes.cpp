// how to compile g++ -std=gnu++17 -O2 368B_Sereja_and_Suffixes.cpp -o main && ./main
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

    int n, m;
    cin >> n >> m;

    set<int> s;
    vector<int> vec(n, 0);
    for(int i = 0; i < n; i++) cin >> vec[i];

    vector<int> rangeQuery(n, 0);
    rangeQuery[n-1] = 1;
    s.insert(vec[n-1]);

    for(int i = n-2; i >= 0; i--) {
        if(s.find(vec[i]) != s.end()) {
            rangeQuery[i] = rangeQuery[i+1];
        } else {
            rangeQuery[i] = rangeQuery[i+1] + 1;
            s.insert(vec[i]);
        }
    }

    while(m) {
        int l; cin >> l; l--;
        cout << rangeQuery[l] << "\n";
        m--;
    }
    return 0;
}
