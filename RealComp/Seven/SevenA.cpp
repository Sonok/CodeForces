// how to compile g++ -std=gnu++17 -O2 SevenA.cpp -o main && ./main
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

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
        int max_index = 0;
        int max_val = 0;
        for(int i = 0; i < n; i++) {
            int p_i; cin >> p_i;
            v[i] = p_i;
            if(max_val < p_i) {
                max_index = i; // 0 index;
                max_val = p_i;
            }
        }
        swap(v[0], v[max_index]);
        
        for(int i = 0; i < n; i++) {
            cout << v[i] << ' ';
        }
        cout << "\n";
    }

    return 0;
}
