// how to compile g++ -std=gnu++17 -O2 235A_LCM_Challenge.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <bitset>
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

void solve() {
    // write solution here
}


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n;
    cin >> n;
    if(n <= 2) cout << n;
    else if (n%2 == 1) cout << 1LL * n * (n-1) * (n-2); // afterward divisible by 2
    else if (n%3 == 0) cout << 1LL * (n-1) * (n-2) * (n-3);
    else cout << 1LL * n * (n-1) * (n-3);
    

    // what's larger n*(n-1)*(n-5) or (n-1)(n-2)(n-3)
    // n^2 - 5n or (n^2 - 5n + 6)

    // n % 3 = 1 n % 6 = 4
    // n % 3 = 2 n % 6 = 2
    return 0;
}
