#include <bits/stdc++.h>
using namespace std;

// Helper function to calculate the sum of digits of a given number N
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to process a single test case
void solve_case() {
    int n;
    cin >> n;
    cout << sumOfDigits(n) << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }

    return 0;
}