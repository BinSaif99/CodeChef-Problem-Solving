#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,x,y;
     cin>>t;
     for(i=0; i<t; i++)
     {
         cin>>x>>y;

         if(x>y)
            cout<<"SECOND"<<endl;
         else if(x==y)
            cout<<"ANY"<<endl;
         else if(x<y)
            cout<<"FIRST"<<endl;
     }
     return 0;
}
