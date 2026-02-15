// how to compile g++ -std=gnu++17 -O2 FifthB.cpp -o main && ./main
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
        int n;
        cin >> n;
        vector<int> v(n);   // vector of size n

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int maxVal = -1; 
        bool flag = true;
        for(int i = 1; i <= n / 2; i++) {
            // i-1 and 2 * (i-1)
            if(v[i-1] > v[2*(i) - i]) {
                swap(v[i-1], v[2*i - 1]);
            }
            if(v[i-1] < maxVal) {
                flag = false; // doesn't work
                break;
            }
            maxVal = v[i-1];
        }
        std::cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}
