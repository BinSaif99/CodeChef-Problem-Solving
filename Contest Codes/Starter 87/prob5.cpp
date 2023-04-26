/*Both solutions are correct but TLE*/


//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        long long x;
//        cin >> x;
//
//        bool found = false;
//        for (int a = 1; a <= 1000000; a++) {
//            if (x < a) break;
//            for (int b = 1; b <= 1000000; b++) {
//                if (x < a*b) break;
//                long long c = x - a*b;
//                if (c >= 1 && c <= 1000000) {
//                    found = true;
//                    cout << a << " " << b << " " << c << endl;
//                    break;
//                }
//            }
//            if (found) break;
//        }
//        if (!found) cout << -1 << endl;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        bool found = false;
        for (int i = 1; i <= 1000000; i++) {
            if (x % i == 0) {
                long long a = i;
                long long bc = x / i;
                long long b = bc - 1;
                long long c = 1;
                if (b >= 1 && b <= 1000000) {
                    found = true;
                    cout << a << " " << b << " " << c << endl;
                    break;
                }
                b++;
                c = bc - a*b;
                if (c >= 1 && c <= 1000000) {
                    found = true;
                    cout << a << " " << b << " " << c << endl;
                    break;
                }
            }
        }
        if (!found) cout << -1 << endl;
    }

    return 0;
}


