// how to compile g++ -std=gnu++17 -O2 A.cpp -o main && ./main
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
        int l, a, b;
        cin >> l >> a >> b;
        set<int> seenA;
        set<int> seenB;
        int i = 0;

        seenA.emplace(0); seenB.emplace(0);
        int both = 1;

        while(true) {
            int next = (i + a) % l;
            if (seenA.find(next) != seenA.end()) {
                break;
            }
            i = next;
            seenA.emplace(i);
        }

        i = 0;
        while(true) {
            int next = (i + b) % l;
            if (seenB.find(next) != seenB.end()) {
                break;
            }
            i = next;
            seenB.emplace(i);

            if (seenA.find(i) != seenA.end()) {
                both++;
            }
        }
        cout << both << "\n";
    }
    return 0;
}
