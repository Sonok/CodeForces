// how to compile g++ -std=gnu++17 -O2 123B_Five_Dishes.cpp -o main && ./main
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

    vector<int> a(5);
    for(int &x : a) cin >> x;

    int total = 0;
    int max_loss = 0;

    for(int t : a) {
        int rounded = ((t + 9) / 10) * 10;
        total += rounded;

        int loss = (10 - t % 10) % 10;
        max_loss = max(max_loss, loss);
    }

    cout << total - max_loss << endl;
}
