#include <iostream>

using namespace std;

int main()
{
    int n, x, cops=0, crime=0; cin >> n; 
    while(n--)
    {
        cin >> x;
        if(x == -1)
        {
            if(cops > 0)
            {
                cops--; 
            }
            else
            {
                crime++;
            }
        } 
        else
        {
            cops += x; 
        }
    }
    cout << crime << endl;
}