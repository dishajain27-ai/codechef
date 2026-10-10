#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y;
    if (cin >> x >> y) {
        // Alice is happy if her score (X) is at least twice Bob's score (Y)
        if (x >= 2 * y) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}