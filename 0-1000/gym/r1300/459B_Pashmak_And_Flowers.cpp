// how to compile g++ -std=gnu++17 -O2 459B_Pashmak_And_Flowers.cpp -o main && ./main
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

    int n; cin >> n;   

    int maxVal = 0; // invalid
    int minVal = 1e9 + 1; // invalid

    map<int, int> counter;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        minVal = min(minVal, x);
        maxVal = max(maxVal, x);
        counter[x] += 1;
    }
    if(maxVal == minVal) {
        cout << "0 " << 1LL * n * (n-1) / 2;
        return 0;
    }
    ll combos = 1LL * counter[minVal] * counter[maxVal];
    

    cout << maxVal - minVal << ' ' << combos;
    return 0;
}
