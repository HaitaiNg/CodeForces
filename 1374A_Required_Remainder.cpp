#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t; 
    cin >> t;

    while(t--)
    {
        int x,y,n; 
        cin >> x >> y >> n; 
        if( n-n % x+y <= n)
        {
            cout << n-n % x + y << endl; 
        }
        else{
            cout << n-n % x - (x - y) << endl;
        }
    }



    // ReadMe: This solution has a Time Limit Exceeded Exception 
    // while(t--)
    // {
    //     int x, y, n;
    //     cin >> x >> y >> n; 
    //     while(n >= 0)
    //     {
    //         int z = n % x;
    //         if(z != 0)
    //         {
    //             if(z == y)
    //             {
    //                 cout << n << endl;
    //                 break; 
    //             }
    //         }
    //         n--; 
    //     }
    // }
}