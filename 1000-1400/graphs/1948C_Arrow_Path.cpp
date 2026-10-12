/*
C. Arrow Path   (Educational Codeforces Round 163, Div. 2, rated ~1200)
https://codeforces.com/contest/1948/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

There is a grid, consisting of 2 rows and n columns. The rows are
numbered from 1 to 2 from top to bottom. The columns are numbered from
1 to n from left to right.

Each cell of the grid contains an arrow pointing either to the left or
to the right. No arrow points outside the grid.

There is a robot that starts in a cell (1, 1). Every second, the
following two actions happen one after another:
  1. Firstly, the robot moves left, right, down or up (it can't try to
     go outside the grid, and can't skip a move);
  2. then it moves along the arrow that is placed in the current cell
     (the cell it ends up after its move).

Your task is to determine whether the robot can reach the cell (2, n).

Input:
The first line contains a single integer t (1 <= t <= 10^4) — the
number of test cases.
The first line of each test case contains a single integer n
(2 <= n <= 2*10^5; n is even) — the number of columns.
The second line contains a string consisting of exactly n characters
'<' or '>' — the arrows in the first row.
The third line contains a string consisting of exactly n characters
'<' or '>' — the arrows in the second row.
Additional constraint on the input: the sum of n over all test cases
doesn't exceed 2*10^5.

Output:
For each test case, print YES if the robot can reach the cell (2, n).
Otherwise, print NO.

Example (official samples, verify on the site):
Input:
4
4
>><<
>>><
2
><
><
4
>>><
>><<
6
>><<><
><>>><

Output:
YES
YES
NO
YES

Note:
In the first example, one of the possible paths looks as follows:
(1, 1) -> (2, 1) -> (2, 2) -> (2, 3) -> (2, 4).
*/

// how to compile g++ -std=gnu++17 -O2 1948C_Arrow_Path.cpp -o main && ./main
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
    vector<pair<int, int>> dirs = {{-1,0}, {1, 0}, {0,1}, {0, -1}};
    cin >> t;          // comment this if single test case
    while (t--) {
        set<pair<int, int>> visited;
        int n; cin >> n;
        vector<vector<char>> grid(2, vector<char>(n));
        for(int i = 0; i < n; i++) cin >> grid[0][i];
        for(int i = 0; i < n; i++) cin >> grid[1][i];

        bool found = false; 
        deque<pair<int, int>> dq;
        dq.emplace_back(0, 0);

        while(dq.size()) {
            auto [i,j] = dq.front();
            dq.pop_front();

            if (visited.find({i, j}) != visited.end()) {
                continue;
            }

            if (i < 0 || i >= 2 || j < 0 || j >= n) {
                continue; // invalud 
            }

            if(i == 1 && j == n-1) {
                found = true;
                break;
            }
            visited.emplace(i, j);
            for(auto [dx, dy] : dirs) {
                int nx = i + dx;
                int ny = j + dy; 

                if(nx < 0 || nx >= 2 || ny < 0 || ny >= n) {
                    continue;
                }
                if(grid[nx][ny] == '<') {
                    dq.emplace_back(nx, ny-1);
                } else {
                    dq.emplace_back(nx, ny+1);
                }
            }
        }
        cout << (found ? "Yes" : "No") << "\n";

    }
    return 0;
}
