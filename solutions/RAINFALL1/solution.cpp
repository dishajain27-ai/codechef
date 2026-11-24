#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        
        // Categorize rainfall based on the problem statement
        if (x < 3) {
            cout << "LIGHT\n";
        } else if (x < 7) {
            cout << "MODERATE\n";
        } else {
            cout << "HEAVY\n";
        }
    }

    return 0;
}