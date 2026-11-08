#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (y > x) {
            cout << "PROFIT\n";
        } else if (y < x) {
            cout << "LOSS\n";
        } else {
            cout << "NEUTRAL\n";
        }
    }
    return 0;
}