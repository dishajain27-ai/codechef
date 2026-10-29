#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int cumulative1 = 0, cumulative2 = 0;
    int max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; ++i) {
        int s, t;
        cin >> s >> t;
        
        cumulative1 += s;
        cumulative2 += t;

        int current_lead = abs(cumulative1 - cumulative2);
        int current_leader = (cumulative1 > cumulative2) ? 1 : 2;

        // Update the maximum lead found so far
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    cout << winner << " " << max_lead << "\n";

    return 0;
}