#include <iostream>

using namespace std;

int main() {
    // Optimize standard I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        
        // Total number of students
        long long total_students = x * y;
        
        // Check if strictly greater than 50%
        // z > total_students / 2 is equivalent to 2 * z > total_students
        if (2 * z > total_students) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}