// how to compile g++ -std=gnu++17 -O2 Tower_of_Hanoi.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
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

void hanoi(int n, int from, int to, int aux) {
    if(n==1) {
        cout << from << " " << to << "\n";
        return;
    }
    hanoi(n-1, from, aux, to);
    cout << from << " " << to << "\n";
    hanoi(n-1, aux, to, from);
    // write solution here
}

int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n = 1;
    cin >> n;          
    cout << (1 << n) - 1 << "\n";
    hanoi(n,1,3,2);
    return 0;
}
