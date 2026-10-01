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
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
 
const ll INF = (ll)1e18;
const int MOD = 1e9 + 7;
 
 
 
int main() {
    fast_io;
    int count = 0;
    int x;
    while(true){
        cin >> x;
        if(x == 1){
            break;
        }
        count += 1;
    }
    cout << abs(count / 5 - 2) + abs(count % 5 - 2);
    
    return 0;
}