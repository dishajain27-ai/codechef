#include <bits/stdc++.h>
using namespace std;

// Helper function to determine if the target score is achievable
bool is_possible(int a, int b, int c, int d) {
    // Team 1 and Team 2 can only increase their scores (goals cannot be subtracted)
    return (c >= a) && (d >= b);
}

void solve_case() {
    int a, b;
    cin >> a >> b;
    int c, d;
    cin >> c >> d;
    
    if (is_possible(a, b, c, d)) {
        cout << "POSSIBLE\n";
    } else {
        cout << "IMPOSSIBLE\n";
    }
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}