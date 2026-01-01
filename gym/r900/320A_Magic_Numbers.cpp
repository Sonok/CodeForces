// how to compile g++ -std=gnu++17 -O2 320A_Magic_Numbers.cpp -o main && ./main
#include <iostream>
#include <string>
using namespace std;



int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    string s;
    cin >> s;          // comment this if single test case
    int i = 0;
    int n = s.length();
    while(i < n) {
        if(s[i] != '1') {
            cout << "NO";
            return 0;
        }
        int runningFours = 0;
        int j = i + 1;
        while(j < n && s[j] == '4') {
            if (runningFours == 2) {
                cout << "NO";
                return 0;
            }
            runningFours++;
            j += 1;
        }
        i = j;
    }
    cout << "YES";
    return 0;
}
