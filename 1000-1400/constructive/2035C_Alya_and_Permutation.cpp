/*
C. Alya and Permutation   (Codeforces Global Round 27, rated ~1400)
https://codeforces.com/contest/2035/problem/C

time limit per test: 2 seconds
memory limit per test: 256 megabytes

Alya has been given a hard problem. Unfortunately, she is too busy running
for student council. Please solve this problem for her.

Given an integer n, construct a permutation p of integers 1, 2, ..., n that
maximizes the value of k (which is initially 0) after the following process.

Perform n operations, on the i-th operation (i = 1, 2, ..., n):
  - If i is odd, k = k & p_i, where & denotes the bitwise AND operation.
  - If i is even, k = k | p_i, where | denotes the bitwise OR operation.

Input:
The first line contains a single integer t (1 <= t <= 500) — the number of
test cases.
The only line of each test case contains a single integer n
(5 <= n <= 2 * 10^5) — the length of the permutation.
It is guaranteed that the sum of n over all test cases does not exceed
2 * 10^5.

Output:
For each test case, output the maximum value of k in the first line and
output the permutation p_1, p_2, ..., p_n in the second line.
If there are multiple such permutations, output any.

Example (from memory, verify on the site):
Input:
6
5
6
7
8
9
10

Output:
5
2 1 3 4 5
7
1 2 4 6 5 3
7
2 4 5 1 3 6 7
15
2 4 5 1 3 6 7 8
9
2 4 5 6 7 1 3 8 9
15
1 2 3 4 5 6 8 10 9 7

Note:
For the first test case, the value of k is determined as follows:
k = 0 initially.
  - On the 1st operation, 1 is odd, so k = 0 & 2 = 0.
  - On the 2nd operation, 2 is even, so k = 0 | 1 = 1.
  - On the 3rd operation, 3 is odd, so k = 1 & 3 = 1.
  - On the 4th operation, 4 is even, so k = 1 | 4 = 5.
  - On the 5th operation, 5 is odd, so k = 5 & 5 = 5.
The final value of k is 5. It can be shown that the final value of k is at
most 5 for all permutations of length 5.
*/

// how to compile g++ -std=gnu++17 -O2 2035C_Alya_and_Permutation.cpp -o main && ./main
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
		// if i is odd use & 
		// i is even use bitwise | 
		// O(n^2) doesn't seem too crazy 
		// basic case 2^n 

		// 2^n is useless but half the nubmers are 2^(n-1) or bigger that digist is filled in. .
		// or the 2nd postion and 3 - 5 - ... we do & 

		// the last or should largest 2^n in or and then for and as long as posislbe 

		int n; cin >> n;
	

		// if 11000 then how many of the other numbers have that? 2^(n-2) like if it has 1 in the first spot 
		// even largest power of 2 the last is log_2 (n) = b 
		// then the last is 11111 b's and then do like llasst > 2^n  for the and and 2^n for or right before that 

		// largest u can come up with | then a & 

		// if odd just stick the last number in there 

		// 2^n, 2^n + 1, 2^n-1, if it's even then 2^n then 2^n + 1 and 2^n - 1 
		// if 2^n exactly then the answer is 2^n

		// if odd then x as ur last number 2^n, 2^n + 1, 2^n-1 what if x is 2^n + 1? 
		// it's just 2^n 

		int pow = 0;
		while ((n >> pow) > 1) pow++;
		int highest = 1 << pow; 
		
		// 2^n + 1
		if (((n-1) & (n-2)) == 0) {
			cout << n  << "\n";
			cout << 2 << " ";
			for(int i = 4; i < n - 1; i++) {
				cout << i << " ";
			}
			cout << "3 1 " << n-1 << " " << n << "\n";
			continue;
		}

		if ((n & (n-1)) == 0) {
			cout << (highest << 1) - 1  << "\n"; // 3 1 2^n - 2 2^n - 1 2^n
			for(int i = 2; i < n-2; i++) {
				if(i == 3) continue;
				cout << i << " ";
			}
			cout << "3 1 " << n-2 << " " << n-1 << " " << n << "\n";
			continue;
		}


		if(n % 2) {
			cout << n << "\n";
			for(int i = 1; i <= n - 1; i++) {
				if (abs(i - highest) <= 1) continue;
				cout << i << " ";
			}
			cout << highest << " " << highest + 1 << " " << highest - 1 << " " << n << "\n";;
		} else { 
			cout << (highest << 1) - 1 << "\n";
			for(int i = 1; i <= n; i++) {
				if (abs(i - highest) <= 1) continue;
				cout << i << " ";
			}
			cout << highest << " " << highest + 1 << " " << highest - 1 << "\n";
		}



    }
    return 0;
}
