#include <algorithm>
#include <iostream>
#include <sstream> 
#include <string> 
#include <vector>

using namespace std; 

bool isPowerOfTwo(long x)
{
    return (x != 0) && (x & (x - 1)) == 0;  
}

int main()
{
    int t = 0, count = 0;  
    cin >> t; 
    if(isPowerOfTwo(t)) cout << "1" << endl; 
    else{
        cout << "2" << endl; 
     }
     return 0;     
}