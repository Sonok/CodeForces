// how to compile g++ -std=gnu++17 -O2 27A_Next_Test.cpp -o main && ./main
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

    int n = 1;
    cin >> n;          // comment this if single test case

    set<int> s;
    int next = 1; // all values covred with upper bound next not included

    while (n--) {
        int x; cin >> x;
        s.insert(x);
        if(x == next) {
            while(s.find(next) != s.end()) {
                next++;
            }
            // we are finished we found the upper bound 
        }
    }
    cout << next;
}
