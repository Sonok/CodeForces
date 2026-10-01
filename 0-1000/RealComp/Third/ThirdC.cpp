// how to compile g++ -std=gnu++17 -O2 ThirdC.cpp -o main && ./main
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
        int n; int q;
        cin >> n >> q;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int maxSoFar = -1; // something that can't happen
        for(int j = n - 1; j >= 0; j--) {
            maxSoFar = max(maxSoFar, max(a[j], b[j]));
            a[j] = maxSoFar;
        }
        for(int i=1; i < n; i++) {
            a[i] += a[i-1];
        }
        // greedy backwards and then do continous sum
        while(q--) {
            int l; int r;
            cin >> l >> r;
            if (l == 1) cout << a[r-1] << " ";
            else cout << a[r-1] - a[l-2] << " ";
        }
        cout << "\n";
    }
    return 0;
}
