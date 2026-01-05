// how to compile g++ -std=gnu++17 -O2 32B_Borze.cpp -o main && ./main
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

    string s;
    cin >> s;          // comment this if single test case
    int i = 0;
    string ans = "";
    while(i < s.length()) {
        if(s[i] == '.') {
            ans.push_back('0');
            i++;
        } else {
            if(s[i+1] == '.') {
                ans.push_back('1');
            } else {
                ans.push_back('2');
            }
            i += 2;
        }
    }
    cout << ans;
    return 0;
}
