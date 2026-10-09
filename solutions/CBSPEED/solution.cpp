#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int threshold, current_speed;
    if (cin >> threshold >> current_speed) {
        // If the current working speed is strictly greater than the threshold, Chef is prone to errors.
        if (current_speed > threshold) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}