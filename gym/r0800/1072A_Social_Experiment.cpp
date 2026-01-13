// how to compile g++ -std=gnu++17 -O2 1072A_Social_Experiment.cpp -o main && ./main
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
        if (n == 2) {
            cout << "2\n"; 
            continue;
        }
        if (n == 3) {
            cout << "3\n"; 
            continue;
        }
        int ret = n % 2;
        cout << ret << "\n"; 
    }
    return 0;
}
