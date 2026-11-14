/*
B. Kar Salesman   (Codeforces Round 978, Div. 2, rated ~1300)
https://codeforces.com/contest/2022/problem/B

time limit per test: 1 second
memory limit per test: 256 megabytes

Karel is a salesman in a car dealership. The dealership has n different
models of cars. There are a_i cars of the i-th model. Karel is an excellent
salesperson and can convince customers to buy up to x cars (of Karel's
choice), as long as the cars are from different models.

Determine the minimum number of customers Karel has to bring in to sell all
the cars.

Input:
Each test contains multiple test cases. The first line contains the number
of test cases t (1 <= t <= 10^4).
The first line of each test case contains two integers n and x
(1 <= n <= 5 * 10^5; 1 <= x <= 10) — the number of different models of cars
and the maximum number of cars Karel can convince a customer to buy.
The second line contains n integers a_1, a_2, ..., a_n (1 <= a_i <= 10^9) —
the number of cars of each model.
It is guaranteed that the sum of n over all test cases does not exceed
5 * 10^5.

Output:
For each test case, output the minimum possible number of customers needed
to sell all the cars.

Example (from memory, verify on the site):
Input:
4
3 2
3 1 2
3 3
2 1 3
5 3
2 2 1 9 2
7 4
2 5 3 3 5 2 5

Output:
3
3
9
7

Note:
For the first case, Karel only needs to lure in 3 customers. He will
convince the customers to buy the following models of cars:
  - Customer 1 buys 2 cars with model 1 and 3.
  - Customer 2 buys 2 cars with model 1 and 2.
  - Customer 3 buys 2 cars with model 1 and 3.
*/

// how to compile g++ -std=gnu++17 -O2 2022B_Kar_Salesman.cpp -o main && ./main
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

void solve() {
    // write solution here
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<ll> a(n);

        ll count = 0;
        ll total = 0;
        ll max_val = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            max_val = max(max_val, a[i]);
            total += a[i];
        }

        count = max((total + x - 1) / x, max_val);
    
        cout << count << "\n";

    }
    return 0;
}
