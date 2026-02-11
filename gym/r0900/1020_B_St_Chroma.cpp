// how to compile g++ -std=gnu++17 -O2 1020_B_St_Chroma.cpp -o main && ./main
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
        int n; int x;
        cin >> n >> x;
        for(int i = 0; i < x; i++) {
            cout << i << " ";
        }
        for(int i = n-1; i >= x; i--) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
