#include <algorithm>
#include <iostream>
#include <string> 
#include <vector>

using namespace std; 

int main()
{
    int t, n; 
    cin >> t; 

    while(t--)
    {
        int n; 
        cin >> n; 
        int ar[100]; 
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i]; 
        }

        sort(ar, ar+n); 
        bool flag = true;
        for(int i = 0; i < n - 1; i++)
        {
            if(ar[i+1] - ar[i] > 1)
            {
                flag = false; 
            }
        }
        if(flag) cout << "YES" << endl; 
        else
        {
            cout << "NO" << endl; 
        }
    }
}