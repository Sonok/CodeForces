// how to compile g++ -std=gnu++17 -O2 9B.cpp -o main && ./main
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

bool solve(string& s) {
    int n = s.size(); int i = 0;
    int countFlips = 0; 
    while(i < n - 1) {
        if(s[i] == s[i+1]) { // violates flip condition 
            if(countFlips >= 1) {
                return false;
            }
            countFlips += 1;
            int startFlipIndex = i + 1; int end = i + 2;
            while(end < n && s[end] != s[end - 1]) { // see until flipping ends
                end += 1;
            }
            if(end == n) {
                return true;
            }
            i = end;
        } else i++;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        string s; cin >> s;
        solve(s) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
