// how to compile g++ -std=gnu++17 -O2 456A_Laptops.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n; cin >> n;          // comment this if single test case
    vector<pair<int,int>> vec; 

    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        vec.emplace_back(a,b);
    }
    sort(vec.begin(), vec.end());

    for(int i = 0; i < n - 1; i++) {
        if(vec[i].second > vec[i+1].second) {
            cout << "Happy Alex" << "\n";
            return 0;
        }
    }
    cout << "Poor Alex" << "\n";
    return 0;
}
