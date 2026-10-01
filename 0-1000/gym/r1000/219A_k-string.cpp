// how to compile g++ -std=gnu++17 -O2 219A_k-string.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int k;
    string s; 
    map<char, int> counter;
    cin >> k >> s;          // comment this if single test case
    for (auto c : s) {
        counter[c] += 1;
    }

    string section;
    for (auto x: counter) {
        if(x.second % k != 0) {
            cout << "-1";
            return 0;
        }
        int count  = x.second / k;
        for(int i = 0; i < count; i++) {
            section += x.first;
        }
    }
    string ans;
    for(int i = 0; i < k; i++) {
        ans += section;
    }
    cout << ans;
    return 0;
}
