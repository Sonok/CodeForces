// how to compile g++ -std=gnu++17 -O2 166A_Rank_List.cpp -o main && ./main
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

    int n; int k;
    cin >> n >> k;          // comment this if single test case
    vector<pair<int, int>> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [](const auto& x, const auto& y) {
        if(x.first == y.first) return x.second < y.second;
        else return x.first > y.first;
    });

    pair<int, int> kth = a[k-1];
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == kth) count++;
    }
    cout << count;
    return 0;
}
