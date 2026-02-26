// how to compile g++ -std=gnu++17 -O2 SevenC.cpp -o main && ./main
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
        vector<int> out; 
        int n; cin >> n;
        vector<vector<int>> entries;

        for(int i = 0; i < n; i++) {
            vector<int> row;
            int L; cin >> L;
            for(int j = 0; j < L; j++) {
                int val; cin >> val;
                row.push_back(val);
            }
            entries.push_back(row);
        }

        set<int> seen; // we've seen all these elements

        while (!entries.empty()) {      

            // find the cheapest row (filtered comparison)
            int bestIndex = 0;
            // Build best's filtered sequence once
            vector<int> b;
            set<int> local_b;                                           
            for (int j = (int)entries[0].size() - 1; j >= 0; j--)
            if (!seen.count(entries[0][j]) && local_b.insert(entries[0][j]).second)  
                b.push_back(entries[0][j]);     

            for (int i = 1; i < (int)entries.size(); i++) {
                vector<int> a;
                set<int> local_a; 
                for (int j = (int)entries[i].size() - 1; j >= 0; j--)
                    if (!seen.count(entries[i][j]) && local_a.insert(entries[i][j]).second) a.push_back(entries[i][j]);

                if (lexicographical_compare(a.begin(), a.end(), b.begin(), b.end())) {
                    bestIndex = i;
                    b = a;  // new best therefore update b
                }
            }   

            for (int i = (int)entries[bestIndex].size() - 1; i >= 0; i--) {
                if (!seen.count(entries[bestIndex][i])) {
                    out.push_back(entries[bestIndex][i]);
                    seen.insert(entries[bestIndex][i]);
                }
            }
            entries.erase(entries.begin() + bestIndex);
        }
        for (int x : out) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
