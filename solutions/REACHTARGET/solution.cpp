#include <iostream>

using namespace std;

void solve() {
    int x, y;
    if (cin >> x >> y) {
        cout << x - y << "\n";
    }
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