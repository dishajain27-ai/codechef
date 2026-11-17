#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        // Each 2000 Rs note is equivalent to four 500 Rs notes (2000 / 500 = 4).
        long long total_500_notes = (long long)n * 4;
        cout << total_500_notes << "\n";
    }

    return 0;
}