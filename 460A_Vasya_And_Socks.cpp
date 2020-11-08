#include <iostream>
#include <vector>

using namespace std; 

int main()
{
    int n, m;
    cin >> n >> m; 
    int c = 1, total = n;
    while( c <= n)
    {
        if(c % m == 0){
            total++; 
            n++; 
        }
        c++; 
    }
    cout << total << endl;
}