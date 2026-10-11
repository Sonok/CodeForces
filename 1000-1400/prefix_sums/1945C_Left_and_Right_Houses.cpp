/*
C. Left and Right Houses   (Codeforces Round 935, Div. 3, rated ~1200)
https://codeforces.com/contest/1945/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

In Letovo village there are n houses. The villagers decided to build a
big road that will divide the village into left and right sides. Each
resident wanted to live on either the right or the left side of the
street, which is described as a sequence a_1, a_2, ..., a_n, where
a_j = 0 if the resident of the j-th house wants to live on the left side
of the street; otherwise, a_j = 1.

The road will pass between two houses. The houses to the left of it will
be declared the left side, and the houses to the right will be declared
the right side. More formally, let the road pass between houses i and
i+1. Then the houses at positions between 1 and i will be on the left
side of the street, and at positions between i+1 and n will be on the
right side. The road also may pass before the first and after the last
house; in this case, the entire village is declared to be either the
right or left side, respectively.

To make the design fair, it was decided to lay the road so that at least
half of the residents on each side of the village are satisfied with the
choice. That is, among i residents on the left side, at least ceil(i/2)
should want to live on the left side. Similarly, among (n - i) residents
on the right side, at least ceil((n - i)/2) should want to live on the
right side.

Determine after which house i the road should be laid in order to
satisfy the described condition and be as close to the middle of the
village as possible. Formally, among all suitable positions i, minimize
|n/2 - i| (n/2 here is a real number, not integer division). If there
are multiple suitable positions i with the minimal |n/2 - i|, output the
smaller one.

Input:
The first line of the input contains a single integer t
(1 <= t <= 2*10^4) — the number of test cases.
The first line of each test case contains a single integer n
(3 <= n <= 3*10^5). The next line contains a string a of length n,
consisting only of 0 and 1.
It is guaranteed that the sum of n over all test cases does not exceed
3*10^5.

Output:
For each test case, output a single number i — the position of the house
after which the road will be laid (0 <= i <= n).

Example (official samples, verify on the site):
Input:
7
3
101
6
010111
6
011001
3
000
3
110
3
001
4
1100

Output:
2
3
2
3
0
1
0

Note:
Let's consider the first example of input data. If we lay the road after
the first house, only the resident of the first house wants to live on
the left side, so the condition is not satisfied. If we lay the road
after the second house, 1 out of 2 residents on the left side (houses 1
and 2) and 1 out of 1 on the right side (house 3) are satisfied. Both
halves are satisfied, and |3/2 - 2| = 0.5 is the smallest possible. So
the answer is 2.
*/

// how to compile g++ -std=gnu++17 -O2 1945C_Left_and_Right_Houses.cpp -o main && ./main
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

        int n; cin >> n;
        vector<char> vec(n);
        vector<int> valid;
        int countZeros = 0;

        for(int i = 0; i < n; i++) {
            cin >> vec[i];
            if(vec[i] == '0') countZeros++;
        } 

        if(countZeros * 2 <= n) { // dominated by rights
            valid.push_back(0);
        } else {  // dominated by lefts 
            valid.push_back(n);
        }
        int zeroLHS = 0;
    
        for(int i = 0; i < n; i++) {
            if(vec[i] == '0') {
                zeroLHS++;
            }
            // left hand part of if
            if(zeroLHS * 2 >= (i+1) && 2*(countZeros-zeroLHS) <= (n-i-1)) {
                valid.push_back(i+1);
            }
        }
        pair<int, int> best(valid[0], abs(1.0*n/2 - valid[0]));
        for(int i : valid) {
            int dist = abs(1.0 * n / 2 - i);
            if (dist < best.second) {
                best = {i, dist};
            }
        }
        cout << best.first << "\n";
    }
    return 0;
}
