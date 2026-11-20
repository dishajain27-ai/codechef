#include <bits/stdc++.h>
using namespace std;

// Function to solve a single test case
void solve_case() {
    int x;
    cin >> x;
    
    // Check if the response code is 404
    if (x == 404) {
        cout << "NOT FOUND\n";
    } else {
        cout << "FOUND\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // The problem implies a single test case based on the input format,
    // but using a standard template for robust handling.
    solve_case();
    
    return 0;
}