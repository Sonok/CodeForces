// how to compile g++ -std=gnu++17 -O2 EightB.cpp -o main && ./main
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

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n, k, p, m;
        cin >> n >> k >> p >> m;
        p--;

        vector<int> v; v.reserve(n);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v.push_back(x);
        }
        int sum = 0;
        if(p < k) { // process asap 
            if (v[p] > m) {
                cout << "0\n";
                continue;
            } else {
                sum += v[p];
            }
        } else {
            priority_queue<int, vector<int>, greater<int>> pq; 
            for(int i = 0; i < p; i++) {
                pq.push(v[i]);
            }
            for (int i = 0; i < (p-k + 1); i++) { // we need to pick p-k elements 
                int smallest = pq.top(); pq.pop();
                sum += smallest;
            }
            if(sum + v[p] > m) { // can't process
                cout << "0\n";
                continue;
            }
            sum += v[p];
        }

        int count = 1; // we processed the thing once 

        rotate(v.begin() + p, v.begin() + p + 1, v.end());
        // we stick the thing to the end 
        sort(v.begin(), v.begin() + (n - 1)); // sort only first n-1 elements

        int run = 0;
        for (int i = 0; i < (n - k); i++) {
            run += v[i]; // these are the n-k smallest from first n-1
        }
        run += v[n - 1]; // add the nth element
        cout << 1 + (m - sum) / run << "\n";
    }
    return 0;
}
