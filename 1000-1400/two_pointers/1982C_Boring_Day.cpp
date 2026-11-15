/*
C. Boring Day   (Codeforces Round 955, Div. 2, rated ~1200)
https://codeforces.com/contest/1982/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

On another boring day, Egor got bored and decided to do something. But since
he has no friends, he came up with a game to play.

Egor has a deck of n cards, the i-th card from the top has a number a_i
written on it. Egor wants to play a certain number of rounds until the cards
run out. In each round, he takes a non-zero number of cards from the top of
the deck and finishes the round. If the sum of the numbers on the cards
collected during the round is between l and r, inclusive, the round is won;
otherwise, it is lost.

Egor knows by heart the order of the cards. Help Egor determine the maximum
number of rounds he can win in such a game. Note that Egor is not required
to win rounds consecutively.

Input:
Each test consists of several test cases. The first line contains an integer
t (1 <= t <= 10^4) — the number of test cases.
The first line of each test case contains three integers n, l, and r
(1 <= n <= 10^5, 1 <= l <= r <= 10^9).
The second line of each test case contains n integers a_1, a_2, ..., a_n
(1 <= a_i <= 10^9) — the numbers on the cards from top to bottom.
It is guaranteed that the sum of n for all test cases does not exceed
2 * 10^5.

Output:
For each test case, output a single number — the maximum number of rounds
Egor can win.

Example (from memory, verify on the site):
Input:
8
5 3 10
2 1 11 3 7
10 1 5
17 8 12 11 7 11 21 13 10 8
3 4 5
3 4 2
8 12 25
10 7 5 13 8 9 12 7
2 3 3
5 2
9 7 9
2 10 5 1 3 7 6 2 3
1 8 10
9
5 5 6
1 4 2 6 4

Output:
3
0
1
4
0
3
1
2

Note:
In the first test case, Egor can win 3 rounds:
  - In the first round, take the top 2 cards with values 2 and 1 and win,
    as their sum is 3. After this, the deck will look like this: [11, 3, 7].
  - In the second round, take the top card and lose, as its value 11 is
    greater than r = 10. After this, the deck will look like this: [3, 7].
  - In the third round, take the top card with value 3 and win. After this,
    the deck will look like this: [7].
  - After this, in the fourth round, Egor only has to take the last card in
    the deck with value 7 and win again.
In the second test case, Egor cannot win any rounds, no matter how hard he
tries.
In the third test case, you can take one card in each round, then the first
and third rounds will be losing, and the second round will be winning.
*/

// how to compile g++ -std=gnu++17 -O2 1982C_Boring_Day.cpp -o main && ./main
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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int count = 0;
    int streak = 0; // current value I have
	int left = 0; 

    for (int i = 0; i < n; i++) {
		if (a[i] > r) {
			streak = 0;
			left = i+1;
			continue;
		}
		
		int newStreak = streak + a[i];
		while(left <= i) {
			if (newStreak > r) { 
				newStreak -= a[left++];
			} else if (newStreak >= l) { // newStreak <= r handled 
				count++;
				streak = 0; 
				left = i+1; // new streak started u take it 
			} else {
				streak = newStreak; // too snall start 
				// increasing size of window
				break;
			}
		}
    }
    cout << count << "\n";
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
