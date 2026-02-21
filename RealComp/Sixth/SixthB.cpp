// how to compile g++ -std=gnu++17 -O2 SixthB.cpp -o main && ./main
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

int solve() {
    return 0;
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n; string s;
        cin >> n >> s;
        
        int count0 = count(s.begin(), s.end(), '0');
        int count1 = n - count0;

        if(count1 % 2 == 0) {
            cout << count1 << "\n";
            for(int i = 0; i < n; i++) {
                if(s[i] == '1') {
                    cout << i+1 << ' ';
                }
            }
        } else if (count0 % 2 == 1) {
            cout << count0 << "\n";
            for(int i = 0; i < n; i++) {
                if(s[i] == '0') {
                    cout << i+1 << ' ';
                }
            }
        } else {
            cout << -1;
        }
        cout << "\n";        
    }
    return 0;
}
