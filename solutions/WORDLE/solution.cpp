#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s, g;
        cin >> s >> g;

        string m = "";
        // Compare each character of the hidden word and the guess word
        for (int i = 0; i < 5; i++) {
            if (s[i] == g[i]) {
                m += 'G';
            } else {
                m += 'B';
            }
        }

        cout << m << "\n";
    }

    return 0;
}