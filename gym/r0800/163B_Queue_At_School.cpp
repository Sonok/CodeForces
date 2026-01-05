// how to compile g++ -std=gnu++17 -O2 163B_Queue_At_School.cpp -o main && ./main
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

    int n,t; 
    string s;
    cin >> n >> t >> s;          // comment this if single test case
    int swaps = 0;
    while (t--) {
        int i = 0;
        while(i < n-1) {
            if(s[i] == 'B' && s[i+1] == 'G') {
                s[i] = 'G'; 
                s[i+1] = 'B';
                i += 2;
                swaps++;
            } else {
                i += 1;
            }
        } 
        if(swaps == 0) {
            break;
        }

    }
    cout << s;
    return 0;
}
