#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n; 
    if(n < 0)
    {
        int a = n / 10; 
        int b = n / 100 * 10 + n % 10; 
        cout << max(a,b) << endl; 
    }
    else
    {
        cout << n << endl; 
    }
}