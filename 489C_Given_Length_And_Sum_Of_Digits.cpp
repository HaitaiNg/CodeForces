#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int m, s;
    cin >> m >> s; 
    int t = 1, base = 10; 
    for(int i = 0; i < m; i++)
    {
        t += i*9*base;
        base *- 10; 
    }
    if()
    {
        
    }
    else
    {
        cout << "-1 -1 " << endl; 
    }
}