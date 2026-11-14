/*
C. Inhabitant of the Deep Sea   (Codeforces Round 938, Div. 3, rated ~1300)
https://codeforces.com/contest/1955/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

n ships set out to explore the depths of the ocean. The ships are numbered
from 1 to n and follow each other in ascending order; the i-th ship has a
durability of a_i.

The Kraken attacked the ships k times in a specific order. First, it attacks
the first of the ships, then the last, then the first again, and so on.

Each attack by the Kraken reduces the durability of the ship by 1. When the
durability of the ship drops to 0, it sinks and is no longer subjected to
attacks (thus the ship ceases to be the first or last, and the Kraken only
attacks the ships that have not yet sunk). If all the ships have sunk, the
Kraken has nothing to attack and it swims away.

For example, if n = 4, k = 5, and a = [1, 2, 4, 3], the following will
happen:
  1. The Kraken attacks the first ship, its durability becomes zero and now
     a = [2, 4, 3];
  2. The Kraken attacks the last ship, now a = [2, 4, 2];
  3. The Kraken attacks the first ship, now a = [1, 4, 2];
  4. The Kraken attacks the last ship, now a = [1, 4, 1];
  5. The Kraken attacks the first ship, its durability becomes zero and now
     a = [4, 1].

How many ships were sunk after the Kraken's attack?

Input:
The first line contains an integer t (1 <= t <= 10^4) — the number of test
cases.
The first line of each test case contains two integers n and k
(1 <= n <= 2 * 10^5, 1 <= k <= 10^15) — the number of ships and how many
times the Kraken will attack the ships.
The second line of each test case contains n integers a_1, a_2, ..., a_n
(1 <= a_i <= 10^9) — the durability of the ships.
It is guaranteed that the sum of n for all test cases does not exceed
2 * 10^5.

Output:
For each test case, output the number of ships sunk by the Kraken on a
separate line.

Example (from memory, verify on the site):
Input:
6
4 5
1 2 4 3
4 6
1 2 4 3
5 20
2 7 1 8 2
2 2
3 2
2 15
1 5
2 7
5 2

Output:
2
3
5
0
2
2
*/

// how to compile g++ -std=gnu++17 -O2 1955C_Inhabitant_of_the_Deep_Sea.cpp -o main && ./main
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

int solve(const int n, ll k, vector<int>& a) {
    // write solution here
    int l = 0;
    int r = n-1; 
    int count = 0;

    ll lhk = (k + 1) / 2; // 5 -> 3 
    ll rhk = k / 2;  // 5 -> 2

    int l_count = 0;
    int r_count = 0;

    while (lhk > 0 && l_count < n) {
        if (a[l] > lhk) {
            a[l] -= lhk;
            break; // can't add to the l_count 
        }
        lhk -= a[l];
        l++;
        l_count++; 
    }
    while (rhk > 0 && r_count < n) {
        if (a[r] > rhk) {
            break; // can't add to the l_count 
        }
        rhk -= a[r];
        r--;
        r_count++; 
    }
    return min(l_count + r_count, n);
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n; ll k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << solve(n,k, a) << "\n";
    }
    return 0;
}
