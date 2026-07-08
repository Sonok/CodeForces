// how to compile g++ -std=gnu++17 -O2 492C_Vanya_and_Exams.cpp -o main && ./main
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

    int n, r, avg;
    cin >> n >> r >> avg;
    // r is the max you can get the avg is the floor 
    vector<pair<int, int>> vec(n);
    ll total = 0;

    for(int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
        total += vec[i].first;
    }
    ll countEssays = 0;
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
    });
    int i = 0; // this is the index for the least amount of essays we have to read
    ll diff = 1LL*avg*n - total;
    while(diff > 0) {
        if(r - vec[i].first <= diff) {
            diff -= r - vec[i].first; // we raise up by some amount of points
            countEssays += 1LL*vec[i].second * (r - vec[i].first); // the amount of essay * filling this grade
            i++;
        } else { // we are finished
            countEssays += 1LL*vec[i].second * diff;
            break;
        }
    }
    cout << countEssays;
    return 0;
}
