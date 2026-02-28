// how to compile g++ -std=gnu++17 -O2 StickDivisions.cpp -o main && ./main
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

    int L; int n; ll total = 0;
    cin >> L >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq; // priority queue of how you cut 
    for(int i = 0; i < n; i++) {
        int cut; cin >> cut;
        pq.push(cut);
    }

    while(pq.size() > 1) {
       ll smallest = pq.top(); pq.pop();
       ll second = pq.top(); pq.pop();
       total += smallest + second;
       pq.push(smallest + second);
    }
    
    cout << total;
    return 0;
}