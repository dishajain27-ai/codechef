#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        // Using a frequency map/counter approach to check team size eligibility
        map<int, bool> validSizes;
        for (int i = 6; i <= 8; i++) {
            validSizes[i] = true;
        }

        // Check if N is in the allowed team size range
        if (validSizes[n]) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}