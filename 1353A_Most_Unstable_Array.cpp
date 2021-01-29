#include <algorithm>
#include <iostream>
#include <sstream> 
#include <string> 
#include <vector>

using namespace std; 

int main()
{
    int t, a[2]; 
    cin >> t; 
    while(t--)
    {
        for(int i = 0; i < 2; i++){
            cin >> a[i]; 
        }
        if(a[0] == 1){
            cout << 0 << '\n';
        }else{
            if(a[0] == 2){
                cout << a[1] << "\n"; 
            }
            else{
                cout << 2*a[1] << "\n"; 
            }
        }
    }
    return 0; 
}