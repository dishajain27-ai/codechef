#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        // Total slices needed = N * X
        long long total_slices = n * x;
        
        // Each pizza has 4 slices. We need the ceiling of (total_slices / 4).
        // Using integer arithmetic: (total_slices + 3) / 4
        long long min_pizzas = (total_slices + 3) / 4;
        
        cout << min_pizzas << "\n";
    }
    
    return 0;
}