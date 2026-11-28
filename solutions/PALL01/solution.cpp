#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // Use two-pointer approach to check if the string is a palindrome
        int left = 0;
        int right = s.length() - 1;
        bool is_palindrome = true;

        while (left < right) {
            if (s[left] != s[right]) {
                is_palindrome = false;
                break;
            }
            left++;
            right--;
        }

        if (is_palindrome) {
            cout << "wins\n";
        } else {
            cout << "loses\n";
        }
    }

    return 0;
}