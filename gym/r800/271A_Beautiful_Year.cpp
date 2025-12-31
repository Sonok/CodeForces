// how to compile g++ -std=gnu++17 -O2 166A_Beautiful_Year.cpp -o main && ./main
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int yr; 
    cin >> yr;         // comment this if single test case
    string s;
    yr++; 
    while (true) {
        s = to_string(yr);
        unordered_set<char> st(s.begin(), s.end());
        if(st.size() == 4) {
            break;
        }
        yr++;
    }
    cout << yr;
    return 0;
}
