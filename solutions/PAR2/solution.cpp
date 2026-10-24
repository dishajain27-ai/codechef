#include <iostream>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    // If the number of chocolates is even, they can be divided equally.
    if (n % 2 == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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