#include<bits/stdc++.h>
using namespace std;

int main()
{
//    long long x,y,sum1=0,sum2=0;
//    int t,i;
//
//    cin >> t;
//
//    for(i=0; i<t; i++)
//    {
//        cin >> x >> y;
//
//        sum1 = pow(x,4)+ (4*pow(y,2));
//        sum2 = pow(x,2)*4*y;
//
//        if(sum1==sum2)
//            cout << "YES" << "\n";
//        else
//            cout << "NO" << "\n";
//
//    }
//
//    return 0;
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        long long sum1 = x * x * x * x + 4 * y * y;
        long long sum2 = 4 * x * x * y;

        if (sum1 == sum2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
