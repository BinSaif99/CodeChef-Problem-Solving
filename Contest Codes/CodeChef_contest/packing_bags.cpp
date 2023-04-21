#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,x,y,z;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> x >> y >> z;

        if(z>=y)
        {
            cout << x << "\n";
        }

        else if(y%z==0)
        {
            cout << x*(y/z) << "\n";
        }

        else
        {
            cout << x*(y/z+1) << "\n";
        }
    }

    return 0;

}
