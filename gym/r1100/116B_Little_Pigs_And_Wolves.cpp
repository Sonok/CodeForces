// how to compile g++ -std=gnu++17 -O2 116B_Little_Pigs_And_Wolves.cpp -o main && ./main
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

    // Style 1: vector (flexible, sized at runtime — most common on CF)
    static int n; static int m;
    cin >> n >> m;
    vector<vector<char>> grid(n,vector<char>(m));

    int countWolves = 0;
    int countPigs = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 'W') countWolves++;
            if(grid[i][j] == 'P') countPigs++;
        }
    }

    // '.' or 'p' or 'w' will show up
    // my thought is that we priortize satisfiying all the wolves
    // that have only one adj pig. The reason being if a wolve 
    // has multiple options and is in contention with a wolve with one
    // pig we'll focus on the wolve that has just one pig

    // we'll figure out what to do after? 
    int totalPigsAte = 0;
    while(countWolves) { // will infite loop when u have a one or more wolve has multiple options
        int reduction = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) { 
                if(grid[i][j] == 'W') {
                    int count = 0;
                    if(i > 0 && grid[i-1][j] == 'P') count++;
                    if(i+1 < n && grid[i+1][j] == 'P') count++;
                    if(j > 0 && grid[i][j-1] == 'P') count++;
                    if(j+1 < m && grid[i][j+1] == 'P') count++;

                    if(count == 0) { // elminate lonely wolf
                        grid[i][j] = '.';
                        reduction++;
                    }
                    if(count == 1) {
                        grid[i][j] = '.';
                        if(i > 0 && grid[i-1][j] == 'P') grid[i-1][j] = '.';
                        else if (i+1 < n && grid[i+1][j] == 'P') grid[i+1][j] = '.';
                        else if (j > 0 && grid[i][j-1] == 'P') grid[i][j-1] = '.';
                        else grid[i][j+1] = '.';
                        totalPigsAte++;
                        reduction++;
                    }

                }
            }
        }
        countWolves -= reduction;
        if(reduction == 0) break;
    }
    totalPigsAte += countWolves;
    cout << totalPigsAte;
    return 0;
}
