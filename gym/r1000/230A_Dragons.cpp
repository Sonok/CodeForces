// how to compile g++ -std=gnu++17 -O2 230A_Dragons.cpp -o main && ./main
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    ios::sync_with_stdio(false);  // disconnect c++ streams and C stdio
    cin.tie(nullptr); // disable autoflush of cout

    int s, n;
    cin >> s >> n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    while (n--) {

        pair<int, int> p;
        cin >> p.first >> p.second;
        pq.push(p);

    }
    while(!pq.empty()) {
        auto [strength, reward] = pq.top();
        
        if(s <= strength) {
            cout << "NO";
            return 0;
        } else{
            s += reward;
        }
        pq.pop();
    }
    cout << "YES";
    return 0;
}
