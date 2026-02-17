// how to compile g++ -std=gnu++17 -O2 257B_Playing_Cubes.cpp -o main && ./main
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

    int m; int n;
    cin >> n >> m;
    if(n == m) {
        cout << m-1 << ' ' << n;
        return 0;
    }
    // n number of red m number of blue
    int maxVal = max(m, n) - 1;
    int minVal = min(m,n);
    cout << maxVal << ' ' << minVal;
    return 0;
}
