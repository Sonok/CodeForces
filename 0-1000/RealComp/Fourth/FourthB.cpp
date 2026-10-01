// how to compile g++ -std=gnu++17 -O2 FourthB.cpp -o main && ./main
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
    cin >> t;         
    while (t--) {
        int n; string s;
        cin >> n >> s;

        int ones = 0, add = 0, run = 0;

        for (int i = 0; i <= n; i++) {               
            if (i < n && s[i] == '1') ones++;

            if (i < n && s[i] == '0') {
                run++;
            } else {
                if (run > 0) {
                    bool leftEdge  = (i - run == 0);    // run starts at 0
                    bool rightEdge = (i == n);          // run ends at n-1
                    if (leftEdge || rightEdge) add += (run + 1) / 3;
                    else add += (run) / 3;
                    run = 0;
                }
            }
        }

        if (ones == 0) cout << (n + 2) / 3 << "\n";
        else cout << (ones + add) << "\n";
    }
    return 0;
}
