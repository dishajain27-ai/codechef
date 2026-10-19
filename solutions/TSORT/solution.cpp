#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // Since the maximum value of elements is bounded by 10^6, 
    // counting sort (or frequency array) is extremely efficient here.
    vector<int> freq(1000001, 0);

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        freq[val]++;
    }

    // Output the sorted elements
    for (int i = 0; i <= 1000000; i++) {
        while (freq[i] > 0) {
            cout << i << "\n";
            freq[i]--;
        }
    }

    return 0;
}