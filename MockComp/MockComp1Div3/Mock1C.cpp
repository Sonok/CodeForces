// how to compile g++ -std=gnu++17 -O2 Mock1B.cpp -o main && ./main
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


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n; // size
        cin >> n;
        vector<int> levels;
        for(int i = 0; i < n; i ++) {
            int level;
            cin >> level;
            levels.push_back(level);
        }
        int total = 0;

        int gain = max(abs(levels[1] - levels[0]), abs(levels[levels.size() - 1] - levels[levels.size() - 2])); // should double back on this 

        for(int i = 0; i < levels.size() - 2; i++) {
            int gap1 = abs(levels[i] - levels[i+1]);
            int gap2 = abs(levels[i+1] - levels[i+2]);

            int gap = abs(levels[i] - levels[i+2]);
            gain = max(gain, gap1 + gap2 - gap); // so we really don't like the result so we just skip
        }

        for(int i = 0; i < levels.size() - 1; i++) {
            total += abs(levels[i] - levels[i+1]);
        }
        total -= gain;
        cout << total << "\n";
    }
    return 0;
}
