#include <bits/stdc++.h>
using namespace std;

// Helper function to process the input stream according to the problem rules.
void solve_case() {
    int n;
    while (cin >> n) {
        // Stop processing when the number 42 is encountered.
        if (n == 42) {
            break;
        }
        cout << n << "\n";
    }
}

int main() {
    // Optimize standard I/O operations for performance.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // The problem does not use a standard testcase count, 
    // but rather processes inputs until 42 is found.
    solve_case();
    
    return 0;
}