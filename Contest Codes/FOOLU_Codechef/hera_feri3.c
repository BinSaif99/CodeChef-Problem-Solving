#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,n,m,sum=0;
    cin>>t;

    for(i=0;i>t;i++)
    {
        cin>>n>>m;
        sum = n*m;
        if(sum==150)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }


    return 0;
}
