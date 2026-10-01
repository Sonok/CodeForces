// how to compile g++ -std=gnu++17 -O2 SecondC.cpp -o main && ./main
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
        int n; cin >> n;
        vector<int> v; 
        for (int i = 0, x; i < n && cin >> x; i++)
            v.push_back(x);
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        int run = 1; // sliding window of longest run
        int currRun = 1;
        for(int index = 0; index < v.size() - 1; index++) {
            if (v[index] + 1 == v[index + 1]) {
                currRun++;
                run = max(run, currRun);
            } else {
                currRun = 1;
            }
        }
        cout << run << "\n";
    }
    return 0;
}
