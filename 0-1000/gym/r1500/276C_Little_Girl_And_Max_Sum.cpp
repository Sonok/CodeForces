// how to compile g++ -std=gnu++17 -O2 276C_Little_Girl_And_Max_Sum.cpp -o main && ./main
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

    int n, q;
    cin >> n >> q;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end(), greater<int>());

    vector<ll> diff(n, 0);
    vector<ll> freq(n, 0);
    
    for(int i = 0; i < q; i++) {
        // queries
        int l, r; // one indexed
        cin >> l >> r;
        l--; r--;
        diff[l]++;
        if(r < n-1) diff[r + 1]--;
    }
    freq[0] = diff[0];

    for(int i = 1; i < n; i++) {
        freq[i] = freq[i-1] + diff[i];
    }

    sort(freq.begin(), freq.end(), greater<ll>());

    ll sum = 0;
    for(int i = 0; i < freq.size(); i++) {
        sum += freq[i] * vec[i];
    }

    cout << sum;
    return 0;
}
