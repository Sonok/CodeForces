// how to compile g++ -std=gnu++17 -O2 SevenB.cpp -o main && ./main
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

vector<pair<int,int>> factorize(int n) {
    vector<pair<int,int>> factors;
    for (int d = 2; (long long)d * d <= n; d++) {
        if (n % d == 0) {
            int cnt = 0;
            while (n % d == 0) { n /= d; cnt++; }
            factors.push_back({d, cnt});
        }
    }
    if (n > 1) factors.push_back({n, 1}); // means we have a prime number 
    return factors;
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n; cin >> n;
        auto v = factorize(n);
        int aux = 1;
        for(const auto& [p, d] : v) {
            aux = aux * p;
        }
        cout << aux << "\n";
    }
    return 0;
}
