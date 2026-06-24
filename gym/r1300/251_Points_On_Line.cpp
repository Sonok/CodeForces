/*
A. Points on Line

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Little Petya likes points a lot. Recently his mom has presented him n points
lying on the line OX. Now Petya is wondering in how many ways he can choose
three distinct points so that the distance between the two farthest of them
doesn't exceed d.

Note that the order of the points inside the group of three chosen points
doesn't matter.

Input

The first line contains two integers: n and d
(1 ≤ n ≤ 10^5, 1 ≤ d ≤ 10^9).

The next line contains n integers x1, x2, ..., xn, their absolute value
doesn't exceed 10^9 — the x-coordinates of the points that Petya has got.

It is guaranteed that the coordinates of the points in the input strictly
increase.

Output

Print a single integer — the number of groups of three points, where the
distance between two farthest points doesn't exceed d.

Please do not use the %lld specifier to read or write 64-bit integers in C++.
It is preferred to use the cin, cout streams or the %I64d specifier.

Examples

Input:
4 3
1 2 3 4

Output:
4

Input:
4 2
-3 -2 -1 0

Output:
2

Input:
5 19
1 10 20 30 50

Output:
1

Note

In the first sample any group of three points meets the condition.

In the second sample only 2 groups of three points meet the condition:
{-3, -2, -1} and {-2, -1, 0}.

In the third sample only one group does:
{1, 10, 20}.
*/

// how to compile g++ -std=gnu++17 -O2 251_Points_On_Line.cpp -o main && ./main
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

    int n, d;
    cin >> n >> d; 
    vector<int> vec(n, 0);
    for(int i=0;i<n;i++) cin >> vec[i];
    ll count = 0;
    int l = 0; // 2 ptr solution max window vec[r] - vec[l] <= d
    // based on the maximal window fix rhs window and then 
    // l to r makes r-l+1 so we do (l-r c 2) possible ppints 
    for(int r = 0; r < n; r++) {
        while(l<=r && vec[r] - vec[l] > d) { 
            // if the window is too large shrink the window 
            l++;
        }
        if(r-l < 2) continue; // window too small 
        count += 1.0f * (r-l) * (r-l-1) / 2; // (r-l) c 2
    }
    cout << count;
    return 0;
}
