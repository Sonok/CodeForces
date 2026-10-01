// how to compile g++ -std=gnu++17 -O2 27A_Next_Test_Optimal.cpp -o main && ./main
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
#include <bitset>
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

    const int N = 3001; // because it can group to 3000 includes 0 index
    bitset<N> b(1); // we don't want 0 to show

    int n; cin >> n;

    while (n--) {
        int x; cin >> x;
        b.set(x);
    }
    int i = 0;
    while(true) {
        if(!b[i]) {
            cout << i; 
            break;
        }
        i++;
    }
    return 0;
}
