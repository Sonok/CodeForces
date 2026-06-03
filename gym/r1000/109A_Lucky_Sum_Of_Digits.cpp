// how to compile g++ -std=gnu++17 -O2 109A_Lucky_Sum_Of_Digits.cpp -o main && ./main
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

    int n; 
    cin >> n;          // comment this if single test case
    
    int i = 0;
    while(i * 4 <= n) {
        if((n-i*4) % 7 == 0) break;
        i++;
    }
    if(i * 4 > n) {
        cout << -1;
    } else {
        string s = "";
        for(int j = 0; j < i; j++) {
            s.push_back('4');
        }
        for(int j = 0; j < n - 4*i; j = j+7) {
            s.push_back('7');
        }
        cout << s;
    }
    return 0;
}
