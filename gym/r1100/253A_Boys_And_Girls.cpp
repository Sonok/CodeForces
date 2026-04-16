// how to compile g++ -std=gnu++17 -O2 253A_Boys_And_Girls.cpp -o main && ./main
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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; int m;
    cin >> n >> m;
    
    string str = "";
    if(n > m) {
        for(int i = 0; i < m; i++) {
            str.append("BG");
        }
        for(int i = 0; i < n - m; i++) {
            str.append("B");
        }
    } else {
        for(int i = 0; i < n; i++) {
            str.append("GB");
        }
        for(int i = 0; i < m - n; i++) {
            str.append("G");
        }
    }
    cout << str;
    return 0;
}
