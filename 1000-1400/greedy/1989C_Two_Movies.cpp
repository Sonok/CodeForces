/*
C. Two Movies   (Educational Codeforces Round 167, Div. 2, rated ~1400)
https://codeforces.com/contest/1989/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

A movie company has released 2 movies. These 2 movies were watched by n
people. For each person, we know their attitude towards the first movie
(liked it, neutral, or disliked it) and towards the second movie.

If a person is asked to leave a review for the movie, then:
  - if that person liked the movie, they will leave a positive review, and
    the movie's rating will increase by 1;
  - if that person disliked the movie, they will leave a negative review,
    and the movie's rating will decrease by 1;
  - otherwise, they will leave a neutral review, and the movie's rating will
    not change.

Every person will review exactly one movie — and for every person, you can
choose which movie they will review.

The company's rating is the minimum of the ratings of the two movies. Your
task is to calculate the maximum possible rating of the company.

Input:
The first line contains a single integer t (1 <= t <= 10^4) — the number of
test cases.
The first line of each test case contains a single integer n
(1 <= n <= 2 * 10^5).
The second line contains n integers a_1, a_2, ..., a_n (-1 <= a_i <= 1),
where a_i is equal to -1 if the first movie was disliked by the i-th viewer;
equal to 1 if the first movie was liked; and 0 if the attitude is neutral.
The third line contains n integers b_1, b_2, ..., b_n (-1 <= b_i <= 1),
where b_i is equal to -1 if the second movie was disliked by the i-th
viewer; equal to 1 if the second movie was liked; and 0 if the attitude is
neutral.
Additional constraint on the input: the sum of n over all test cases does
not exceed 2 * 10^5.

Output:
For each test case, print a single integer — the maximum possible rating of
the company, if for each person, choose which movie to leave a review on.

Example (from memory, verify on the site):
Input:
4
2
-1 1
-1 -1
1
-1
-1
5
0 -1 1 0 1
-1 1 0 0 1
4
-1 -1 -1 1
-1 1 1 1

Output:
0
-1
1
1
*/

// how to compile g++ -std=gnu++17 -O2 1989C_Two_Movies.cpp -o main && ./main
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
		vector<int> a(n); vector<int> b(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];

		// chose partition 1, partion 2 
		// find the maximize the min (sum a[partion 1], sum b[partion 2])	

		// states are seperate from each other what u chose in state i 
		// has no impact in state i+1 

		// 9 cases. 1-1 pick the lower one. if 1-0 chose a+1
		// if 0-1 chose b+1, if 0-0 doesn't matter of 1, -1
		// if a+1 < b-1 then pick adding 1 to a. else -1 to b 
		int A = 0;
		int B = 0;
		int one = 0;
		int minusOne = 0;

		for(int i = 0; i < n; i++) {
			if (a[i] == 1 && (b[i] == 0 || b[i] == -1)) A++;
			if (b[i] == 1 && (a[i] == 0 || a[i] == -1)) B++; 
			// one of the values being 0 and the other being -1 is a skip
			// skip a[i]=b[i] = 0
			if(a[i] == b[i] ) {
				if(a[i] == 1) one++;
				if(a[i] == -1) minusOne++;
			} 

		}

		// A, B and u have a tie -> if 
		while(one) {
			if (A > B) B++;
			else A++;
			one--;
		}

		while(minusOne) {
			if (A > B) A--;
			else B--;
			minusOne--;
		}


		cout << min(A,B) << "\n";
    }
    return 0;
}
