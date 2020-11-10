#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t, a, b, result; 
    cin >> t; 
    while(t--)
    {
        cin >> a >> b; 
        int x = a*2, y = b*2; 
        if(x > y) 
        {
            if(a > y) cout << a*a << endl;
            else{
                cout << y*y << endl; 
            }
        }
        else
        {
            if(b > x) cout << b * b << endl;
            else{
                cout << x*x << endl; 
            }
        }
        
    }

}