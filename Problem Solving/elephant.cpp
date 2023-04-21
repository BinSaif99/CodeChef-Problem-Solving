#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;

    if(n<5)
        cout<<1;
    else if(n%5==0)
    {
        sum = n/5;
        cout<<sum;
    }

    else if(n>5 && n%5!=0)
    {
        sum = (n/5)+1;
        cout<<sum;
    }


    return 0;
}
