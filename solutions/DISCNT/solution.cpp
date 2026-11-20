#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        // The original price is 100, and there is a discount of x percent.
        // Therefore, the amount to pay is 100 - x.
        cout << 100 - x << "\n";
    }
    
    return 0;
}