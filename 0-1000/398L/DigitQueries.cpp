// how to compile g++ -std=gnu++17 -O2 main.cpp -o main && ./main
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

string solve(ll n) {
    if(n==0) {
        return "";
    }
    // write solution here
    ll buildUp = 0;
    int digitPlace = 1;
    while (buildUp < n) {
        ll addNumber = pow(10, digitPlace-1) * 9 * (digitPlace); // tbd if I need to change digit place
        if (buildUp + addNumber > n) {
            break; // break out the loop 
        }
        digitPlace += 1;
        buildUp += addNumber;
    }
    n -= buildUp;
    int addDigit = 1 + (int) (n / pow(10, digitPlace -1));
    return to_string(addDigit) + solve(n);
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        ll n; cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}
