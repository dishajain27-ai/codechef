#include <bits/stdc++.h>
using namespace std;

// Function to multiply a large number (stored as a vector of digits) by a single integer
void multiply(vector<int>& res, int num) {
    int carry = 0;
    for (size_t i = 0; i < res.size(); i++) {
        int prod = res[i] * num + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to calculate and print the factorial of n
void solve() {
    int n;
    cin >> n;
    
    // Vector to store digits of the factorial in reverse order
    vector<int> res;
    res.push_back(1);
    
    for (int i = 2; i <= n; i++) {
        multiply(res, i);
    }
    
    // Print digits from most significant to least significant
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}