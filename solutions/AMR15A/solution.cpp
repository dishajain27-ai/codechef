#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int even_count = 0;
    int odd_count = 0;

    // Read weapons and count even and odd numbers
    for (int i = 0; i < n; ++i) {
        int weapons;
        cin >> weapons;
        if (weapons % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Army is ready if lucky (even) soldiers > unlucky (odd) soldiers
    if (even_count > odd_count) {
        cout << "READY FOR BATTLE\n";
    } else {
        cout << "NOT READY\n";
    }

    return 0;
}