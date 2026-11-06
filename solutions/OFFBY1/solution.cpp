#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    if (cin >> a >> b) {
        // Calculate standard sum and append '1' to the end (which means sum * 10 + 1)
        int result = (a + b) * 10 + 1;
        cout << result << "\n";
    }

    return 0;
}