// how to compile g++ -std=gnu++17 -O2 ThirdA.cpp -o main && ./main
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
        int n; int s; int x;
        cin >> n >> s >> x;
        int total = 0;
        for(int i = 0; i < n; i++) {
            int var; cin >> var;
            total += var;
        }
        if(total > s || (s - total) % x != 0) {
            // no eligible
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
