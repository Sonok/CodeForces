// how to compile g++ -std=gnu++17 -O2 C.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
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

void solve() {
    // write solution here
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        // of size 1 then fail. 
        // if of size 2 then 01 or 10 is a fail 
        // if of size 3 then all of them fail

        // size 4 anything fails that leaves 01 or 10
        //  work 1111 0000 1001 0110 1100 0011 0001 1110 0110 1001 0010 1101 0100 1011 1000 0111
        // 1010   doesn't 0101 doesn't 
        //if u interleave a pattern then it might work

        int n; string s;
        cin >> n >> s;
        if (n % 2 == 1) {
            cout << "NO\n";
            continue;
        }
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {
                cout << "YES\n";
                flag = false;
                break;
            }
        }
        if(flag) cout << "NO\n";
    }
    return 0;
}
