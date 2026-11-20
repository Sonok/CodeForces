/*
B2. The Strict Teacher (Hard Version)   (Codeforces Round 972, Div. 2, rated ~1200)
https://codeforces.com/contest/2005/problem/B2

time limit per test: 1.5 seconds
memory limit per test: 256 megabytes

This is the hard version of the problem. The only differences between the
two versions are the constraints on m and q. In this version,
m, q <= 10^5.

Narek and Tsovak were busy preparing this round, so they have not managed to
do their homework and decided to steal David's homework. Their strict
teacher noticed that David has no homework and now wants to punish him. She
hires other teachers to help her catch David. And now m teachers together
are chasing him. Luckily, the classroom is big, so David has many places to
hide.

The classroom can be represented as a one-dimensional line with cells from
1 to n, inclusive.

At the start, all m teachers and David are in distinct cells. Then they make
moves. During each move:
  - David goes to an adjacent cell or stays at the current one.
  - Then, each of the m teachers simultaneously goes to an adjacent cell or
    stays at the current one.

This continues until David is caught. David is caught if any of the teachers
(possibly more than one) is located in the same cell as David. Everyone sees
others' moves, so they all act optimally.

Your task is to find how many moves it will take for the teachers to catch
David if they all act optimally.

Acting optimally means the student makes his moves in a way that maximizes
the number of moves the teachers need to catch him; and the teachers
coordinate with each other to make their moves in a way that minimizes the
number of moves they need to catch the student.

Also, as Narek and Tsovak think this task is easy, they decided to give you
q queries on David's position.

Input:
In the first line of the input, you are given a single integer t
(1 <= t <= 10^5) — the number of test cases. The description of each test
case follows.
In the first line of each test case, you are given three integers n, m, and
q (3 <= n <= 10^9, 1 <= m, q <= 10^5) — the number of cells on the line, the
number of teachers, and the number of queries.
In the second line of each test case, you are given m distinct integers
b_1, b_2, ..., b_m (1 <= b_i <= n) — the cell numbers of the teachers.
In the third line of each test case, you are given q integers
a_1, a_2, ..., a_q (1 <= a_i <= n) — David's cell number for every query.
It is guaranteed that for any i, j such that 1 <= i <= m and 1 <= j <= q,
b_i != a_j.
It is guaranteed that the sum of values of m over all test cases does not
exceed 2 * 10^5.
It is guaranteed that the sum of values of q over all test cases does not
exceed 2 * 10^5.

Output:
For each test case, output q lines, the i-th of them containing the answer
of the i-th query.

Example (from memory, verify on the site):
Input:
2
8 1 1
6
3
10 3 3
1 4 8
2 3 10

Output:
5
1
1
2

Note:
In the only query of the first example, the student can run to cell 1. It
will take the teacher five moves to reach from cell 6 to cell 1, so the
answer is 5.
In the second query of the second example, the student can just stay at
cell 3. The teacher, initially located in cell 4, can reach cell 3 in one
move. Therefore, the answer is 1.
*/

// how to compile g++ -std=gnu++17 -O2 2005B2_The_Strict_Teacher_Hard.cpp -o main && ./main
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
        solve();
    }
    return 0;
}
