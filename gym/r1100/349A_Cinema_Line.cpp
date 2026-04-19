// how to compile g++ -std=gnu++17 -O2 349A_Cinema_Line.cpp -o main && ./main
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

    int n; cin >> n;     
    int changeCount25 = 0;
    int changeCount50 = 0;
    for(int i = 0; i < n; i++) {
        int dollar; cin >> dollar;
        if(dollar == 25) {
            changeCount25++;
        } else if (dollar == 50) {
            changeCount50++;
            changeCount25--;
        } else {
            if(changeCount25 >= 1 && changeCount50 >= 1) {
                changeCount25 -= 1;
                changeCount50 -= 1;
            } else if (changeCount25 >= 3 ) {
                changeCount25 -= 3;
            } else {
                cout << "NO";
                return 0;
            }
        }
        if(changeCount25 < 0 || changeCount50 < 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
