#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int result(int a, int b, int div, int rem)
{
    int sum = a; 
    while( a >= b)
    {
        div = a / b; 
        sum += div; 
        rem = a % b; 
        a = div + rem;
    }
    return sum;
}

int main()
{
    int a, b, div, rem; 
    cin >> a >> b; 
    cout << result(a, b, div, rem) << endl; 
}