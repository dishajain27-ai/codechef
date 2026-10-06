#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // There are 2 courses for each language.
    // Given N languages, the total number of courses is 2 * N.
    int n;
    if (cin >> n) {
        cout << 2 * n << "\n";
    }

    return 0;
}