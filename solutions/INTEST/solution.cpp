#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    if (!(cin >> n >> k)) return 0;

    long long count = 0;
    for (long long i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        if (a % k == 0) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}