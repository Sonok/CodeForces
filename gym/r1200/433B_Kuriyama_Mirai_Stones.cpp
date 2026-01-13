// how to compile g++ -std=gnu++17 -O2 433B_Kuriyama_Mirai_Stones.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int n;
    cin >> n;          // size of list 

    vector<long long> unsorted;
    unsorted.reserve(n);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        unsorted.push_back(x);
    }
    int m; cin >> m; // lines

    vector<long long> sorted = unsorted;
    sort(sorted.begin(), sorted.end());

    // we should make a prefix sum array 
    for(int i=1; i < n; i++) {
        unsorted[i] += unsorted[i-1];
        sorted[i] += sorted[i-1];
    }

    while(m--) {
        int type, l, r;
        cin >> type >> l >> r;
        const auto& pref = (type == 1) ? unsorted : sorted;
        long long ans = pref[r-1] - (l > 1 ? pref[l-2] : 0 );
        cout << ans << "\n";
    }
    return 0;
}
