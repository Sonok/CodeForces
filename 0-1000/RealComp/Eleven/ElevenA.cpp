// how to compile g++ -std=gnu++17 -O2 ElevenA.cpp -o main && ./main
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

    int n = 1;
    cin >> n;          // comment this if single test case

    // the parity of the sum of x_i is odd we want it to be even in all
    // cases. so we stick all the odd numbers in even spots and
    // all the even numbers in odd spots 
    while(n--) {
        int size; cin >> size;
        vector<int> vec(size);
        for (int i = 0; i < size; i++) {
            vec[i] = size - i;
        }
        for(int i = 0; i < size; i++) cout << vec[i] << " ";
        cout << "\n";
    }
    return 0;
}
