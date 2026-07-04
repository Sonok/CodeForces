// how to compile g++ -std=gnu++17 -O2 main.cpp -o main && ./main
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

    string s; cin >> s;    
    int n = s.size();
    int queries; cin >> queries;

    if(n == 1) { // only one line no need for calcaulation will throw error first value
        for(int i = 0; i < queries; i++) cout << 0 << "\n";
    }


    // we do a running counter of the amount of flips
    // we get a query for i to j. So we could the amount of flips from 
    // i to j-1. 
    // so if there are x flips up to i and y flip up j-1 
    // so we do j-i - (y-x)
    vector<int> amountOfFlips(n, 0);
    amountOfFlips[0] = (s[0] != s[1]) ? 1 : 0; 
    for(int i = 1; i < n - 1; i++) {
        if(s[i] == s[i+1]) {
            amountOfFlips[i] = amountOfFlips[i-1];
        } else { 
            amountOfFlips[i] = amountOfFlips[i-1] + 1;
        }
    }

    s[n-1] = s[n-2];

    while(queries--) { // post decrement
        // we can count the amount of flips 
        int i, j;
        cin >> i >> j;
        i--; j--; // 0 index 

        if(i == 0) { // do the calculation for j-1
            cout << j-i-amountOfFlips[j-1] << "\n";
        } else {
            cout << j-i-amountOfFlips[j-1] + amountOfFlips[i-1] << "\n";
        }

    }

    return 0;
}
