// how to compile g++ -std=gnu++17 -O2 HW1B.cpp -o main && ./main
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
#include <bitset>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const ll INF = (ll)1e18;
const int MOD = 1e9 + 7;

const int MAX_VAL = 1e6 + 1; // max value 
bitset<MAX_VAL> isPrime(0);


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout


    isPrime.flip(); // assume everything is prime unless told otherwiswe
    isPrime.reset(0); isPrime.reset(1);// 0, 1 is not prime

    for(int i = 2; i <= 1001; i++) {
        if(isPrime[i]) { // prime
            for(int j = i*i; j < MAX_VAL; j += i) {
                isPrime.reset(j); // not prime
            }
        }
    }

    int t = 1;
    cin >> t;          // comment this if single test case

    while (t--) {
        int val; cin >> val;
        cout << (isPrime[val] ? "YES" : "NO") << "\n";
    }
    return 0;
}
