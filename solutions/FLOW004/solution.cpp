#include <bits/stdc++.h>
using namespace std;

// Function to solve an individual testcase
void solve_case() {
    string s;
    cin >> s;
    
    // The first digit is at index 0, and the last digit is at the last index
    int first_digit = s[0] - '0';
    int last_digit = s.back() - '0';
    
    cout << first_digit + last_digit << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}