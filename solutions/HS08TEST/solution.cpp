#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    double y;
    
    // Read the withdrawal amount and initial balance
    if (cin >> x >> y) {
        // Check if the withdrawal amount is a multiple of 5 
        // and if there is enough balance to cover the amount plus 0.50 transaction fee.
        if (x % 5 == 0 && y >= (x + 0.50)) {
            y -= (x + 0.50);
        }
        
        // Output the final balance with exactly two digits of precision
        cout << fixed << setprecision(2) << y << "\n";
    }

    return 0;
}