#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p1, p2, p3, p4;
    if (cin >> p1 >> p2 >> p3 >> p4) {
        int count = 0;
        
        // Count how many weeks Chef solved at least 10 problems
        if (p1 >= 10) count++;
        if (p2 >= 10) count++;
        if (p3 >= 10) count++;
        if (p4 >= 10) count++;
        
        cout << count << "\n";
    }

    return 0;
}