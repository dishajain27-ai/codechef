#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        // Find and print the second maximum of the three numbers
        if ((a > b && a < c) || (a < b && a > c)) {
            cout << a << "\n";
        } else if ((b > a && b < c) || (b < a && b > c)) {
            cout << b << "\n";
        } else {
            cout << c << "\n";
        }
    }

    return 0;
}