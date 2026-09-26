/*
A. Flipping Game

time limit per test: 1 second
memory limit per test: 256 megabytes

Iahub got bored, so he invented a game to be played on paper.

He writes n integers a1, a2, ..., an. Each integer can be either 0 or 1.
He is allowed to do exactly one move: choose two indices i and j
(1 <= i <= j <= n) and flip all values ak whose positions are in the
range [i, j].

Flipping x means applying:

    x = 1 - x

The goal is to obtain the maximum possible number of ones after exactly
one move.

Input:
The first line contains an integer n (1 <= n <= 100).
The second line contains n integers a1, a2, ..., an.
Each value is either 0 or 1.

Output:
Print one integer — the maximum number of 1s that can be obtained after
exactly one move.

Example 1:
Input:
5
1 0 0 1 0

Output:
4

Example 2:
Input:
4
1 0 0 1

Output:
4
*/

// how to compile g++ -std=gnu++17 -O2 327A_Flipping_Game.cpp -o main && ./main
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

    int n; cin >> n; // just a sliding window with the condition you can only have one streak of 0s 
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];

    int currStreak = 0; 
    int longestStreak = 0; 
    bool seenZeroStreak = false;
    int l = 0; int r = 0;

    while(r < n) {

        if (vec[r] == 1) {
            if(seenZeroStreak) { // flipped from 0 -> 1
                l = r; // so we don't redo computation of window
                while(r < n && vec[r] == 1) {
                    currStreak += 1;
                    r++;
                }
                longestStreak = max(longestStreak, currStreak);
                currStreak = 0; // now r is either done or 0 again? 
                seenZeroStreak = false;
            } 
            else {
                currStreak += 1;
                r++;
            }
        } else {
            if(!seenZeroStreak) { // flipped from 1 -> 0
                seenZeroStreak = true; // now we've seen it
                currStreak += 1;
                r++;
            } 
            else {
                currStreak += 1;
                r++;
            }
        }

        longestStreak = max(longestStreak, currStreak);
    }

    cout << longestStreak;
    return 0;
}
