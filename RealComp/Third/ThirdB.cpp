// how to compile g++ -std=gnu++17 -O2 ThirdB.cpp -o main && ./main
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
        vector<int> vec(n);
        for(int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        int i = 0; 
        bool flip = false; // edge case for when it alr reverse order
        while(i < n) {
            if (vec[i] != n-i) {
                flip = true;
                break;
            }
            i++;
        } 
        if(flip) { // we need to swap index with where the largest one is 
            int val = n - i; // the value we want
            auto it = find(vec.begin(), vec.end(), val);
            int index = it - vec.begin(); // index guarentted we swap
            reverse(vec.begin() + i, vec.begin() + index + 1);
        }
        for (auto x : vec) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
