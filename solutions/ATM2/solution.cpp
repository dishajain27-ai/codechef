#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    string result = "";
    // Reserve memory to avoid reallocations
    result.reserve(n);
    
    for (int i = 0; i < n; i++) {
        if (k >= a[i]) {
            k -= a[i];
            result += '1';
        } else {
            result += '0';
        }
    }
    
    cout << result << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}