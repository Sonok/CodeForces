// how to compile g++ -std=gnu++17 -O2 347A_Differnce_Row.cpp -o main && ./main
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
    vector<int> vec(n,0);
    for(int i = 0; i < n; i++) cin >> vec[i];
    sort(vec.begin(), vec.end(), greater<int>());

    reverse(vec.begin() + 1, vec.end() - 1);

    for(int i = 0; i < n; i++) cout << vec[i] << " ";
    return 0;
}
