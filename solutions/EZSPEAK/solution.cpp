#include <bits/stdc++.h>
using namespace std;

// Helper function to check if a character is a vowel
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Two-pointer / sliding window approach to find consecutive consonants
    int consecutive_consonants = 0;
    bool hard_to_pronounce = false;

    for (int i = 0; i < n; ++i) {
        if (!isVowel(s[i])) {
            consecutive_consonants++;
            if (consecutive_consonants >= 4) {
                hard_to_pronounce = true;
                break;
            }
        } else {
            // Reset the count if we encounter a vowel
            consecutive_consonants = 0;
        }
    }

    if (hard_to_pronounce) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}