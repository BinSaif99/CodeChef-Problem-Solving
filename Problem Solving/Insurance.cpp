#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,x,y;
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>x>>y;

        if(x>y)
            cout<<y<<endl;
        else if(x<y)
            cout<<x<<endl;
        else if(x==y)
            cout<<x<<endl;

    }
    return 0;
}
