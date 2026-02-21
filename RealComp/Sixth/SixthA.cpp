// how to compile g++ -std=gnu++17 -O2 SixthA.cpp -o main && ./main
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

int rotateLeftInPlace(string& s, int n) {
    int count = 0;
    int i = 0;
    int currStreak = 0;
    while(i < n) {
        int j = 1;
        while(i + j < n && s[i+j] == s[i]) {
            j++;
        }
        count += 1;
        i += j;
    }

    n = n % s.length();
    rotate(s.begin(), s.begin() + 1, s.end());
    return count;
}


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n; string s;
        cin >> n >> s;
        bool addFlag = false;
        int maxVal = -1;
        for(int i = 0; i < n; i++) {
            maxVal = max(maxVal, rotateLeftInPlace(s, n));
        }
        cout << maxVal << "\n";
    }
    return 0;
}
