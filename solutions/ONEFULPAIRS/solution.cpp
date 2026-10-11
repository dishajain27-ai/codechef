#include <bits/stdc++.h>
using namespace std;

// Helper function to check if the given pair is a Oneful Pair
bool isOnefulPair(long long a, long long b) {
    return (a + b + (a * b)) == 111;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b;
    if (cin >> a >> b) {
        if (isOnefulPair(a, b)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    
    return 0;
}