// how to compile g++ -std=gnu++17 -O2 149B_Big_Segment.cpp -o main && ./main
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

    int n;
    cin >> n;          // comment this if single test case
    int smallest = 1e9 + 1;
    int largest = 0;
    int index = -1; 

    vector<pair<int,int>> p;
    for(int i = 0; i < n; i++) {
        int l, r; 
        cin >> l >> r;
        p.emplace_back(l, r);

        smallest = min(smallest, l);
        largest = max(largest, r);
    }
    for(int i = 0; i < n; i++) {
        if(p[i].first == smallest && p[i].second == largest) {
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << -1;
    return 0;
}
