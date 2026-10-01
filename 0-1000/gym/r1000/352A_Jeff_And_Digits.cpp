
// how to compile g++ -std=gnu++17 -O2 352A_Jeff_And_Digits.cpp -o main && ./main
#include <iostream>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n; 
    cin >> n;          // how many digits
    int zeros = 0;
    int fives = 0; 
    char val;
    while (n--) {
        cin >> val;
        if(val == '5') {
            fives++;
        } else {
            zeros++;
        }
    }
    if (zeros == 0) {
        cout << "-1";
        return 0;
    }
    if (fives < 9) {
        cout << "0";
        return 0;
    }
    int numFives = (fives / 9) * 9;
    string s = "";
    for(int i = 0; i < numFives; i++) {
        s += '5';
    }
    for(int i = 0; i < zeros; i++) {
        s += '0';
    }
    cout << s;
    return 0;
}
