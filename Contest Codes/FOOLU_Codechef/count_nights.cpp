#include <bits/stdc++.h>
using namespace std;

/*int main() {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int N;
        cin >> N;

        int count = 0;
        for(int j=1; j<=N; j++) {
            if(N % j == 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}*/





int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // logic to find the count of zeroes
        int count = 0;
        while (n > 0) {
            if (n % 10 == 0) {
                count++;
            }
            n /= 10;
        }

        // output the count of zeroes
        cout << count << endl;
    }

    return 0;
}
