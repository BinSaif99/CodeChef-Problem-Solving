#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int ans = 1000; // Set initial answer to a large value
        for (int i = 0; i <= 5; i++) {
            for (int j = 0; j <= 5; j++) {
                // Check if combination of 2 and 4 packets can make up 10 packets
                if (2*i + 4*j == 10) {
                    int cost = i*x + j*y;
                    if (cost < ans) {
                        ans = cost; // Update answer if cost is less
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

