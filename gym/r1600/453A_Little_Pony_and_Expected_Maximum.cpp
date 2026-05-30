// how to compile g++ -std=gnu++17 -O2 453A_Little_Pony_and_Expected_Maximum.cpp -o main && ./main
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

    int m, n;
    cin >> m >> n;          // comment this if single test case
    
    // we calcualte expected value of the largest dice
    // case largest is 1  = (1/m) ^ n 
    // case lagest is 2 is = (2/m) ^ n - (1/m)^n
    // case largest is 3 is (3/m)^n - (2/m)^n

    float total = 0;
    for(int i = 1; i <= m; i++) { // i statnds for all probability states
        total += i * (pow((1.0*i / m),n) - pow((1.0*(i-1) / m) , n));
    }
    cout << total;
    return 0;
}
