#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        
        // Since there are 10 test cases, each test case is worth (x / 10) points.
        // We can also use a map to cache point values for each test case weight if needed,
        // but a direct calculation is most efficient. Let's use a frequency map approach
        // as requested by the persona, mapping test case index to points.
        
        map<int, int> point_map;
        int points_per_case = x / 10;
        
        for (int i = 1; i <= 10; i++) {
            point_map[i] = points_per_case;
        }
        
        int total_score = 0;
        for (int i = 1; i <= n; i++) {
            total_score += point_map[i];
        }
        
        cout << total_score << "\n";
    }

    return 0;
}