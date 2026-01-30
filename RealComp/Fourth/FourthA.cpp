// how to compile g++ -std=gnu++17 -O2 FourthA.cpp -o main && ./main
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
        int n;
        cin >> n;

        int mid = (n % 2 == 0) ? (n / 2 + 1) : ((n + 1) / 2);  
        cout << mid;

        for (int i = 1; i < n; ++i) {
            int k = (i + 1) / 2;
            if (i % 2 == 1)
                cout << ' ' << mid - k;
            else
                cout << ' ' << mid + k;
        }
        cout << '\n';

    }
}
