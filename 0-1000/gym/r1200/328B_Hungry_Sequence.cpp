// how to compile g++ -std=gnu++17 -O2 328B_Hungry_Sequence.cpp -o main && ./main
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


const int MAX_VAL = 1e7 + 1;

vector<bool> sieve() {
    vector<bool> primes(MAX_VAL, true);
    primes[0] = false;
    primes[1] = false;

    for(int i = 2; i < 3164; i++) {
        if( primes[i] ) { // if prime
            int step = i;
            for(int start = i * i; start < MAX_VAL; start += step) {
                primes[start] = false; // make it not prime
            }
        }
    }
    return primes;
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    vector<bool> primes = sieve();
    int n; cin >> n;    

    int i = 0;     
    while(n) {
        if(primes[i]) {
            cout << i << " ";
            n--;
        }
        i++;
    }
    return 0;
}
