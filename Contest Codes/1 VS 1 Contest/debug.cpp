//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        long long a, b;
//        cin >> a >> b;
//        if (a >= b)
//        {
//            // If the cost of leasing is greater than or equal to the cost of purchase, output 0 years
//            cout << 0 << endl;
//        }
//        else
//        {
//            // Otherwise, calculate the number of years using the formula: ceil(b / (2.0 * a - b))
//            // The use of '2.0' instead of '2' ensures that the division result is a float instead of an integer
//            cout << (long long) ceil(b / (2.0 * a - b)) << endl;
//        }
//    }
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int years = 0;
        while (a * years < b)
        {
            years++;
        }
        cout << years - 1 << endl;
    }
    return 0;
}

//this is the perfect solution.
