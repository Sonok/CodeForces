// how to compile g++ -std=gnu++17 -O2 337A_Puzzles.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n, m; // n students m puzzles
    cin >> n >> m; 

    vector<int> v;
    v.reserve(m);

    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int minVal = v[n-1]-v[0];
    for(int i = 1; i <= m - n; i++){
        minVal = min(minVal, v[i+n-1] - v[i]);
    }
    cout << minVal;
    return 0;
}
