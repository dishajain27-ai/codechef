#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        // Compare A and B
        if (a > b) {
            cout << ">\n";
        } else if (a < b) {
            cout << "<\n";
        } else {
            cout << "=\n";
        }
    }

    return 0;
}