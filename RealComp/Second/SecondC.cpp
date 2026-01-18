// how to compile g++ -std=gnu++17 -O2 SecondB.cpp -o main && ./main
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
        int i = 1;
        while(i < n) {
            if(v[i] - i != v[0]) {
                cout << i << "\n";
                break;
            }
            i++;
        }
        cout >> n >> "\n"
    }
    return 0;
}
