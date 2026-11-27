// Round 1138 (Div. 3) D. Unexpected Precipitation
// REFERENCE SOLUTION (written by Claude after the round, not my own solve).
// how to compile g++ -std=gnu++17 -O2 D_sol.cpp -o main && ./main < in.txt
//
// d = (Sunny's total) - (Aubrey's total). Sunny wants d big, Aubrey wants d small.
//
// Go BACKWARDS over the shops. For "we are about to visit pair i", keep two numbers:
//   sunnyLeft  = the d that will be added from pair i to the end, if Sunny is on the left now
//   aubreyLeft = the same, if Aubrey is on the left now
// After the last pair nothing more is added, so both start at 0.
//
// Sunny on the left (he chooses, he wants the max):
//   buy : Sunny pays x, Aubrey pays y  -> d changes by (x - y), sides stay  -> (x - y) + sunnyLeft
//   skip: nothing is paid, sides swap                                        -> aubreyLeft
// Aubrey on the left (she chooses, she wants the min):
//   buy : Aubrey pays x, Sunny pays y  -> d changes by (y - x), sides stay  -> (y - x) + aubreyLeft
//   skip: nothing is paid, sides swap                                        -> sunnyLeft
//
// The game starts at pair 1 with Sunny on the left, so the answer is sunnyLeft at the end.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];

    ll sunnyLeft = 0, aubreyLeft = 0;          // values for "after the last pair"
    for (int i = n - 1; i >= 0; i--) {
        ll newSunny  = max((x[i] - y[i]) + sunnyLeft,  aubreyLeft);   // buy, or skip
        ll newAubrey = min((y[i] - x[i]) + aubreyLeft, sunnyLeft);    // buy, or skip
        sunnyLeft = newSunny;
        aubreyLeft = newAubrey;
    }

    ll d = sunnyLeft;
    if (d > 0) cout << "Sunny\n";
    else if (d < 0) cout << "Aubrey\n";
    else cout << "Draw\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
