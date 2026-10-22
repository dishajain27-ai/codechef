#include <bits/stdc++.h>
using namespace std;

// Function to solve an individual test case
void solve_case() {
    int n;
    cin >> n;
    
    int remove_count = 0;
    for (int i = 0; i < n; ++i) {
        int difficulty;
        cin >> difficulty;
        // Chef should remove problems with difficulty rating >= 1000
        if (difficulty >= 1000) {
            remove_count++;
        }
    }
    
    cout << remove_count << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}