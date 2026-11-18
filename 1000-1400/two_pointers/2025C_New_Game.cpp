/*
C. New Game   (Educational Codeforces Round 170, Div. 2, rated ~1300)
https://codeforces.com/contest/2025/problem/C

time limit per test: 2 seconds
memory limit per test: 512 megabytes

There's a new game Monocarp wants to play. The game uses a deck of n cards,
where the i-th card has exactly one integer a_i written on it.

At the beginning of the game, on the first turn, Monocarp can take any card
from the deck. During each subsequent turn, Monocarp can take exactly one
card that has either the same number as on the card taken on the previous
turn or a number that is one greater than the number on the card taken on
the previous turn.

In other words, if on the previous turn Monocarp took a card with the number
x, then on the current turn he can take either a card with the number x or a
card with the number x + 1. Monocarp can take any card which meets that
condition, regardless of its position in the deck.

After Monocarp takes a card on the current turn, it is removed from the
deck.

According to the rules of the game, the number of distinct numbers written
on the cards that Monocarp has taken must not exceed k.

If, after a turn, Monocarp cannot take a card without violating the
described rules, the game ends.

Your task is to determine the maximum number of cards that Monocarp can take
from the deck during the game, given that on the first turn he can take any
card from the deck.

Input:
The first line contains a single integer t (1 <= t <= 10^4) — the number of
test cases.
The first line of each test case contains two integers n and k
(1 <= k <= n <= 2 * 10^5) — the number of cards in the deck and the maximum
number of distinct numbers that can be written on the cards that Monocarp
takes.
The second line contains a sequence of integers a_1, a_2, ..., a_n
(1 <= a_i <= 10^9), where a_i is the number written on the i-th card.
Additional constraint of the input: the sum of n over all test cases doesn't
exceed 2 * 10^5.

Output:
For each test case, print the maximum number of cards that Monocarp can take
from the deck during the game, given that on the first turn he can take any
card from the deck.

Example (from memory, verify on the site):
Input:
4
10 2
5 2 4 3 4 3 4 5 3 2
5 1
10 11 10 11 10
9 3
4 5 4 4 6 5 4 4 6
3 2
1 3 1

Output:
6
3
9
2

Note:
In the first example, Monocarp needs to take any of the cards with the
number 3. On the next two turns, he needs to take the two remaining cards
with the number 3. On the next three turns, he needs to take three cards
with the number 4. After that, Monocarp will not be able to take any more
cards from the deck, and he will have 6 cards.
*/

// how to compile g++ -std=gnu++17 -O2 2025C_New_Game.cpp -o main && ./main
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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> counter;
        for(int i=0; i<n; i++) {
            cin >> a[i];
        } 

        sort(a.begin(), a.end());


        int i = 0; 
        int max_count = 0;

        while (i < n) {
            deque<int> dq; // fresh new deque condition all consecutive from a to a+k-1 
            dq.push_front(a[i]);

            int j = i+1; 
            int unique = 1; 

            while (j < n) {
                if (a[j] > dq.back() + 1) {
                    break; 
                }
                // no if it stays the same 
                dq.push_back(a[j]);
                while (dq.front() + k == dq.back()) {
                    dq.pop_front();
                }
                max_count = max(max_count,(int) dq.size());
                j++;
            }

            max_count = max(max_count,(int) dq.size());
            i = j;
        }
        cout << max_count << "\n";
    }
    return 0;
}
