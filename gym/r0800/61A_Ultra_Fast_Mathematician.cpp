// how to compile g++ -std=gnu++17 -O2 61A_Ultra-Fast_Mathematician.cpp -o main && ./main
#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)

int main() {
    fast_io;
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    vector<char> arr[n];
    for (int i = 0; i < n; i++) {
        cout << (s1[i] == s2[i] ? '0' : '1');
    }
    cout << '\n';
    return 0;
}
