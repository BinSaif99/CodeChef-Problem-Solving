#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i,t,x,total=0;

    cin >> t;

    for(i=0; i<t; i++)
    {
        cin >> x;

        total = x*4;

        if(total > 1000)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }



    return 0;
}
