// how to compile g++ -std=gnu++17 -O2 322B_Ciel_And_Flowers.cpp -o main && ./main
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

    int r, g, b;
    cin >> r >> g >> b;
    int count = 0;

    int x = r % 3; int y = g%3; int z = b%3;
    int countTwos = 0;
    if(x == 2) countTwos++;
    if(y == 2) countTwos++;
    if(z == 2) countTwos++;

    if(countTwos == 2) {
        if(r <= 1 || g <= 1 || b <= 1) { // can't subtract 2 from 0 or 1
            cout <<  int(r / 3) + int(g / 3) + int(b / 3);
            return 0;
        }
        count = 2;
        r -= 2;
        g -= 2;
        b -= 2;
    }

    count += int(r / 3) + int(g / 3) + int(b / 3);
    count += min({r%3, g%3, b%3});
    cout  << count;
    return 0;

    // the main thing is, the mod of r,g,b 3 doesn't change
    // unless you make a basket which decreases count of all 3 
    
    // what I failed to consider was the difffernt case x % 3 = 0, 1, 2
    // 3 ^ 3 choices. If all x,y,z are thes same it's an easy choice 
    // x, x, x - 3 works as is 
    // 0, 0, 1 - 3 // works as is leaves only one flower on table
    // 0, 0, 2 - 3  // works as is 
    // 1, 1, 2 - 3 works as is 
    // 0, 1, 2 - 6 // rotation works as is 
    // 1, 1, 0 - 3 
    // 2, 2, 0 - 3 so this we get +2 by forcing a bundle and then adding a 0 
    // 2, 2, 1 - 3 same with this +2 by forcing a bundle 
}
