#include <bits/stdc++.h>
using namespace std;

// Helper function to solve an individual test case
void solve_case() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    // Put the three numbers in an array/vector and sort them
    vector<long long> nums = {a, b, c};
    sort(nums.begin(), nums.end());
    
    // The second largest will be the middle element after sorting
    cout << nums[1] << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    
    return 0;
}