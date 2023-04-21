#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, x, y, sum = 0;

    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> x >> y;
        sum = (4 * x) + y;
        cout << sum << endl;
    }
    return 0;
}