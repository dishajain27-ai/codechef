#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int A, B;
    cin >> A >> B;
    cout << min(A, B) << "\n";
}

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}