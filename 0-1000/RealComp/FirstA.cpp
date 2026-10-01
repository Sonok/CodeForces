// how to compile g++ -std=gnu++17 -O2 FirstA.cpp -o main && ./main
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

    int t = 1; // tests
    cin >> t;          // comment this if single test case
    vector<string> out;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool alice;
        if (n == 1) {
            alice = (a[0] == 0);
        } else if (n == 2) {
            alice = (a[0] == 1 && a[1] == 1);
        } else {
            alice = !(a[0] == 0 && a[n - 1] == 0);
        }

        cout << (alice ? "Alice\n" : "Bob\n");
    }

    return 0;
}
