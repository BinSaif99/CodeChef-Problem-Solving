#include <bits/stdc++.h>
using namespace std;

int main()
{
//    int i,round,t,x,flag=0,cash=100;
//
//    cin >> t;
//
//    for(i=0; i<t; i++)
//    {
//        cin >> x;
//
//        flag = x%10;
//
//        if(flag<=4)
//            round = x-flag;
//        else
//            round = x+flag;
//
//        cout << cash-round << "\n";
//    }
//
//
//    return 0;


   int t;
    cin >> t; // number of test cases
    while(t--) {
        int x;
        cin >> x; // cost of the item
        int rem = x % 10; // remainder when cost is divided by 10
        if(rem >= 5) { // if remainder is greater than or equal to 5, round up
            x += 10 - rem;
        } else { // else round down
            x -= rem;
        }
        cout << 100 - x << endl; // amount returned to Chef
    }
    return 0;
}
