#include <iostream>
#include <algorithm>
#include <cmath> 

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
    
        int n =0; 
        cin >> n; 
        int x = 0;
        for(int k = 2; k <= 35; k++)
        {
            int denominator = pow(2,k) -1; 
            if(n % denominator) continue;


            x = n / denominator; 
            break; 
        }
        cout << x << endl;
    }
}