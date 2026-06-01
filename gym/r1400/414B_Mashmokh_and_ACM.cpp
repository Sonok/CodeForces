// how to compile g++ -std=gnu++17 -O2 414B_Mashmokh_and_ACM.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <numeric>
#include <cstring>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<long long,long long>;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const ll INF = (ll)1e18;
const int MOD = 1e9 + 7;

int dp[2005][2005];

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n, k;
    cin >> n >> k; // definitely a dp and you do top down
    // we should fill out a 2d matrix and build down till k 
    for(int i = 1; i <= n; i++) { 
        dp[i][1] = 1; // end value of 1 so like the link is just 1
    }

    // we define dp[i][j] as path for j length. The end value a_i = k 

    // bottom down dp we calcualte state[m][j] the 
    // way we do that is by adding all multiples of i into the next step do it all in one shot

    for (int j = 2; j <= k; j++) { // length of sequence 
        for (int i = 1; i <= n; i++) { // so for each sequence we have a value 
            for (int m = i; m <= n; m += i) { // so we are finding all divisors of i 
                dp[m][j] = (dp[m][j] + dp[i][j-1]) % MOD;
            }
        }   
    }
    // so the loop calcualtes all end values of n. For each good sequence you
    // have to consider all a_k = [1...n]

    int result = 0; 
    for(int i = 1; i <= n; i++) result = (result + dp[i][k]) % MOD;
    cout << result;
    return 0;
}
