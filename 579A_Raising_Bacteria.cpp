#include <algorithm>
#include <iostream>
#include <sstream> 
#include <string> 
#include <vector>
using namespace std; 


int main()
{
    long long  t = 0, count = 0;  
    cin >> t; 
    while( t / 2 != 0){
        if( t % 2 == 1) count++; 
        t /= 2; 
    }
    cout << count + 1 << endl; 
     return 0;     
}