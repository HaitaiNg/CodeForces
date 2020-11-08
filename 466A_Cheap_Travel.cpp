#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,a,b; 
    cin >> n >> m >> a >> b; 

    int c = 0; 
    if(a <= b)
    {
        n = b*b; 
        c = max(a,b); 
    }
    else if(n % m == 0)
    {
        c = n / m; 
        c *= b;
    }
    else
    {
        // cout << "1 " << (n/m) * b << endl; 
        // cout << "2 " << (n % m) * min(a,b) << endl;
        c = ((n / m) * b) + ( (n % m) * min(a,b)); 
    }
    // cout << n * a << endl; 
    // cout << c << endl; 
    cout << std::min( n * a, c ) << endl;
}