#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, choco=2, candy=5, n,x,y, sum1=0, sum2=0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> x >> y;
        sum1=x*choco ; sum2=y*candy;

        if(sum1 > sum2)
        {
            cout << "Chocolate" << "\n" ;
        }

        else if(sum1 == sum2)
        {
            cout << "Either" << "\n";
        }

        else
        {
            cout << "Candy" << "\n";
        }

    }
    return 0;
}
