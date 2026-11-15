#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        // A triangle is valid if the sum of its three angles is exactly 180 degrees
        // and all angles are positive (which is guaranteed by constraints: 1 <= A,B,C <= 180)
        if (a + b + c == 180) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}