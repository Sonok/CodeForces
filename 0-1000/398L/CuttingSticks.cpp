// how to compile g++ -std=gnu++17 -O2 CuttingSticks.cpp -o main && ./main
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

    int n; int L;
    cin >> n >> L;
    vector<pair<int,int>> vec;         
    for(int i = 0; i < n; i++) {
        int cut; int num;
        cin >> cut >> num;
        vec.emplace_back(cut, num);
    }

    sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    });

    // struct cmp {
    //   bool operator()(const pair<int, int> &a, const pair<int, int> &b) const {
    //        return a.second < b.second;
    //    }
    // };
    // set<pair<int, int>, cmp> s;
    ll total = 0; // first cut, cuts the whole stick
    set<int> cuts; 
    cuts.insert(0);
    cuts.insert(L);
    for(auto it = vec.begin(); it != vec.end(); it++) {
        int val = (*it).first;
        if(cuts.find(val) == cuts.end()) { // we cut the stick
            total += *cuts.lower_bound(val) - *prev(cuts.lower_bound(val));
        }
        cuts.insert(val);
    }
    cout << total;
    return 0;
}