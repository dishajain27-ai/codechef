#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        // 1 kg of pulp makes 1000 pages, and 1 notebook takes 100 pages.
        // Therefore, 1 kg of pulp makes (1000 / 100) = 10 notebooks.
        long long notebooks = n * 10;
        
        cout << notebooks << "\n";
    }

    return 0;
}