// how to compile g++ -std=gnu++17 -O2 353A_Domino.cpp -o main && ./main
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



int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n; 
    cin >> n; 

    bool hasAFlip = false; // so a parity flip     

    int numOddX = 0;
    int numOddY = 0;   

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x%2 != y%2) { // there's a meaningful flip you can map
            hasAFlip = true;
        } 
        if (x%2 == 1) {
            numOddX++;
        } 
        if (y%2 == 1) {
            numOddY++;
        } 

    }

    // if there's only one odd number than it's cooked 
    // matter a fact an odd number of odds
    
    // say that all the odds are stuck togehter can't do 
    // anything becuase a flip does not 

    if(numOddX % 2 == 0 && numOddY % 2 == 0) {
        cout << 0;
    } else if(numOddX % 2 != numOddY % 2) { // differnt 
        cout << -1;
    } else if (hasAFlip) {
        cout << 1;
    } else {
        cout << -1; // all the flips are useless
    }

    return 0;
}
