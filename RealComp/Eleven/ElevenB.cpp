// how to compile g++ -std=gnu++17 -O2 ElevenB.cpp -o main && ./main
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

    int t; cin >> t;          // comment this if single test case
    // note the size has to be ll
    vector<ll> vec;
    vec.push_back(1); vec.push_back(2); vec.push_back(3);
    for(int i = 3; i < 50; i++) {
        long long x = 3LL << (i - 2);  
        vec.push_back(x);
    }
    while(t--) {
        int n; cin >> n;
        if(n == 1) { 
            cout << 1 << "\n";
        }
        else if(n == 2) {
            cout << -1 << "\n";
        } else {
            for(int i = 0; i<n;i++) cout << vec[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}
