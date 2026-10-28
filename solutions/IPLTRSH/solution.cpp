#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        // If students are more than tickets, the rest miss out. 
        // Otherwise, everyone gets a ticket (0 left out).
        if (n > m) {
            cout << n - m << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    
    return 0;
}