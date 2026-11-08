#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Read the credit score
    int x;
    cin >> x;

    // Use a frequency map / lookup approach as requested by the persona guidance
    map<string, int> statusMap;
    
    if (x >= 750) {
        statusMap["YES"]++;
    } else {
        statusMap["NO"]++;
    }

    // Output based on the map presence
    if (statusMap["YES"] > 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}