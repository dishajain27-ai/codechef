#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (cin >> s) {
        // Using a frequency/character map approach conceptually to access the 7th element
        unordered_map<int, char> lucky_map;
        for (int i = 0; i < s.length(); i++) {
            lucky_map[i + 1] = s[i];
        }
        
        // Output the 7th letter
        cout << lucky_map[7] << "\n";
    }

    return 0;
}