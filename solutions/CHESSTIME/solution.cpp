#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        // Convert hours to minutes (n * 60) and divide by the time per game (20 minutes)
        // (n * 60) / 20 simplifies to n * 3
        int max_games = n * 3;
        cout << max_games << "\n";
    }

    return 0;
}