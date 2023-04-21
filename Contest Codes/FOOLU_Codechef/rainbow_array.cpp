#include <iostream>
#include <string>

using namespace std;

bool isRainbow(string s) {
    int n = s.length();

    // check if the string has all the required letters
    bool has_rainbow_letters = true;
    for (char c = 'a'; c <= 'g'; c++) {
        if (s.find(c) == string::npos) {
            has_rainbow_letters = false;
            break;
        }
    }

    if (!has_rainbow_letters) {
        return false;
    }

    // check if the string is a palindrome
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }

    // check if the string is a rainbow array
    for (char c = 'a'; c < 'g'; c++) {
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                count1++;
            } else if (s[i] == c + 1) {
                count2++;
            }
        }
        if (count1 != count2) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // check if the string is a rainbow array
        if (isRainbow(s)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
