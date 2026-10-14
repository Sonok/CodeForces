/*
C. LR-remainders   (Codeforces Round 927, Div. 3, rated ~1200)
https://codeforces.com/contest/1932/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

You are given an array a of length n, a positive integer m, and a string
of commands of length n. Each command is either the character 'L' or the
character 'R'.

Process all n commands in the order they are written in the string s.
Processing a command is done as follows:
  - First, output the remainder of the product of all elements of the
    array a when divided by m.
  - Then, if the command is 'L', remove the leftmost element from the
    array a; if the command is 'R', remove the rightmost element from
    the array a.

Note that after each move, the length of the array a decreases by 1,
and after processing all commands, it will be empty.

Write a program that will process all commands in the order they are
written in the string s (from left to right).

Input:
The first line contains an integer t (1 <= t <= 10^4) — the number of
test cases in the input.
The descriptions of the test cases follow.
The first line of each test case contains two integers n and m
(1 <= n <= 2*10^5, 1 <= m <= 10^4) — the initial length of the array a
and the value to take the remainder by.
The second line of each test case contains n integers a_1, ..., a_n
(1 <= a_i <= 10^4).
The third line of each test case contains a string s consisting of n
characters 'L' and 'R'.
It is guaranteed that the sum of n over all test cases does not exceed
2*10^5.

Output:
For each test case, output n integers b_1, b_2, ..., b_n, where b_i is
the remainder when dividing the product of all elements of the current
state of the array a by m at the beginning of the i-th command.

Example (official samples, verify on the site):
Input:
4
4 6
3 1 4 2
LRRL
5 1
1 1 1 1 1
LLLLL
6 8
1 2 3 4 5 6
RLLLRR
1 10000
10000
R

Output:
0 2 4 1
0 0 0 0 0
0 0 0 4 4 4
0

Note:
In the first test case:
  - 3 * 1 * 4 * 2 = 24, 24 mod 6 = 0, then remove the leftmost;
  - 1 * 4 * 2 = 8, 8 mod 6 = 2, then remove the rightmost;
  - 1 * 4 = 4, 4 mod 6 = 4, then remove the rightmost;
  - 1 mod 6 = 1, then remove the leftmost. The array is empty.
*/

// how to compile g++ -std=gnu++17 -O2 1932C.cpp -o main && ./main
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


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int t = 1;
    cin >> t;          // comment this if single test case
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n, 0);
        for(int i = 0; i < n; i++) cin >> v[i];
        string s; cin >> s;

        int last = 0;
        int x = 0;
        for(int i = 0; i < n-1; i++) {
            if(s[i] == 'L') {
                x++;
            }
        }
        int l = x-1;
        int r = x+1;
        ll product = v[x] % m;
        vector<ll> result;
        result.push_back(product);

        for(int index = n-2; index >= 0; index--) {
            if (s[index] == 'L') {
                product = product * v[l] % m;
                l--;
            } else {
                product = product * v[r] % m;
                r++;
            }
            result.push_back(product);
        }
        reverse(result.begin(), result.end());
        for(int i = 0; i < n; i++) cout << result[i] << " ";
        cout << "\n";
    }
    return 0;
}
