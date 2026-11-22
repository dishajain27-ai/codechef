#include <bits/stdc++.h>
using namespace std;

// Function to calculate the final population for a single test case
void solve_case() {
    long long x, y, z;
    cin >> x >> y >> z;
    
    // Final population = Initial - Left + Immigrated
    long long final_population = x - y + z;
    
    cout << final_population << "\n";
}

int main() {
    // Optimize standard input/output streams for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}