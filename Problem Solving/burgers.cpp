#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, flag = 0, a, b;
    cin >> t;

    for (i = 0; i < t; i++)
    {
        cin >> a >> b;

        if (a == b)
            cout << a << endl;

        else if (a > b)
            cout << b << endl;

        else if (a < b)
            cout << a << endl;
    }
    return 0;
}