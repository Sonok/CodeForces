/*
D. Robert Hood and Mrs Hood   (Codeforces Round 974, Div. 3, rated ~1400)
https://codeforces.com/contest/2014/problem/D

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Robin's brother and mother are visiting, and Robin gets to choose the start
day for each visitor.

All days are numbered from 1 to n. Visitors stay for d continuous days, all
of those d days must be between day 1 and n inclusive.

Robin has a total of k risky 'jobs' planned. The i-th job takes place
between days l_i and r_i inclusive, for 1 <= i <= k. If a job takes place on
any of the d days, the visit overlaps with this job (the length of overlap
is unimportant).

Robin wants his brother's visit to overlap with the maximum number of
distinct jobs, and his mother's the minimum.

Find suitable start days for the visits of Robin's brother and mother. If
there are multiple suitable days, choose the earliest one.

Input:
The first line of the input contains a single integer t (1 <= t <= 10^4) —
the number of test cases.
The first line of each test case consists of three integers n, d, k
(1 <= n <= 10^5, 1 <= d, k <= n) — the number of total days, duration of the
visits, and the number of jobs.
Then follow k lines of each test case, each with two integers l_i and r_i
(1 <= l_i <= r_i <= n) — the start and end day of each job.
It is guaranteed that the sum of n over all test cases does not exceed
2 * 10^5.

Output:
For each test case, output two integers, the best starting days of Robin's
brother and mother respectively. Both visits must fit between day 1 and n
inclusive.

Example (from memory, verify on the site):
Input:
6
2 1 1
1 2
4 1 2
1 2
2 4
7 2 3
1 2
1 3
6 7
5 1 2
1 2
3 5
9 2 1
2 8
9 2 4
7 9
4 8
1 3
2 3

Output:
1 1
2 1
1 4
1 1
1 1
3 4

Note:
In the first test case, the only job fills all 2 days, both should visit on
day 1.
In the second test case, day 2 overlaps with 2 jobs and day 1 overlaps with
only 1.
In the third test case, Robert visits for days [1, 2], Mrs. Hood visits for
days [4, 5].
*/

// how to compile g++ -std=gnu++17 -O2 2014D_Robert_Hood_and_Mrs_Hood.cpp -o main && ./main
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
        int n, d, k;
        cin >> n >> d >> k;
        // how to efficently calcualte how many groups in time period d? 
        // this is O(n) operation to see [m, m+d] minium [c, c+d] maximum
        // with [(l_i, r_i)] take this sort by end time r_i wants to intersect 
        // r_i >= m but and r_i <= m+d  in the group 
        vector<pair<int, int>> jobs(n);
        for(int i = 0; i < k; i++) cin >> jobs[i].first >> jobs[i].second;

        vector<int> begin(n+1, 0); // day that corresponds with how many 
        vector<int> finish(n+1, 0); 

        // question is how many jobs end between n and n+d
        // that's count if n is valid chose 

        for (const auto &[start, end] : jobs) {
            begin[start]++; 
            finish[end]++;
        }

        for(int i = 1; i <= n; i++) { 
            begin[i] += begin[i-1]; 
            finish[i] += finish[i-1]; // make both cummulative 
        }

        // begin counts everything that started at point i or before  si 
        // end count everything that end at point i or before 

        // at each moment i we want to excludes everything that ends before i-1 (finish[i-1])
        // and excludes stuff that starts i+1 after so that (k-begin[i])
        vector<int> intersection(n+1, 0);
        for (int i = 1; i <= n-d+1; i++) {
            intersection[i] = -finish[i-1] + begin[i+d-1];
        }
        
        pair<int, int> best = {0, -1};
        pair<int, int> worst = {0, k+1};

        for (int i = 1; i <= n-d+1; i++) {
            if (intersection[i] > best.second) {
                best = {i, intersection[i]};
            }
            if (intersection[i] < worst.second) {
                worst = {i, intersection[i]};
            }
        }
        cout << best.first << " " << worst.first << "\n";
    }
    return 0;
}
