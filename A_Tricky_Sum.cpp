// Contest 598 :: Tricky Sum 

#include <algorithm>
#include <iostream>
#include <sstream> 
#include <string> 
#include <vector>
#include <cmath>

using namespace std; 

int main()
{
    long long total, t, n, a; 
    cin >> t; 
    while(t--)
    {
        cin >> n; 
        total = n*(n+1)/2;
        a = 1; 
        while(a <= n){
            total -= 2*a; 
            a = a*2;
        }
        cout << total << endl; 

    }
    return 0; 
}
