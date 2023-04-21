#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c > 20)
            cout << "HOT" << endl;
        else
            cout << "COLD" << endl;
    }
    return 0;
}
