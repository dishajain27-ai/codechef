#include <bits/stdc++.h>
using namespace std;

// Helper function to process the condition and return the updated value of N
int transformNumber(int n) {
    if (n % 4 == 0) {
        return n + 1;
    } else {
        return n - 1;
    }
}

void solve_case() {
    int n;
    cin >> n;
    cout << transformNumber(n) << "\n";
}

int main() {
    // Optimizing I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // The problem implies a single test case based on the format, 
    // but structuring with solve_case() ensures clean modularity.
    solve_case();
    
    return 0;
}