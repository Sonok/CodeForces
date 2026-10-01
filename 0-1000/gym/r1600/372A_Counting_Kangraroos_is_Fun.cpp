// how to compile g++ -std=gnu++17 -O2 372A_Counting_Kangraroos_is_Fun.cpp -o main && ./main
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

    int n; cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin >> vec[i];
    
    sort(vec.begin(), vec.end());

    int count = 0;
    int r = 0; // so this is a two ptr solution 

    set<int> seen;
    for(int l = 0; l < n; l++) {
        if(seen.find(l) != seen.end()) continue; // value taken alr 

        auto lo = lower_bound(vec.begin() + r, vec.end(), vec[l] * 2);
        if(lo == vec.end()) {
            cout << n - count;
            return 0;
        }
        // so if r is value then we cosnume it
        count++;
        r = lo - vec.begin();
        seen.emplace(r++); // so the index is done we move onto the next one 
    }
    cout << n - count;
    return 0;
}
