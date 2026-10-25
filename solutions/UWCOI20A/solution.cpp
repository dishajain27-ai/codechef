#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        // Using a map to store the frequencies of mountain heights, 
        // which naturally keeps keys sorted and allows easy maximum retrieval.
        map<long long, int> heightFreq;
        
        for (int i = 0; i < n; i++) {
            long long h;
            cin >> h;
            heightFreq[h]++;
        }
        
        // The maximum element will be the last key in the map
        if (!heightFreq.empty()) {
            auto maxElement = heightFreq.rbegin();
            cout << maxElement->first << "\n";
        }
    }

    return 0;
}