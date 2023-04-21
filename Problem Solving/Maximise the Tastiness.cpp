#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,d,i;
    cin>>t;
    
    for(i=0; i<t; i++)
    {
        cin>>a>>b>>c>>d;
        cout<<max(a,b) + max(c,d)<<"\n";
    }
    return 0;
}