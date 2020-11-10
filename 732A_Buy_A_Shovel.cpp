#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k, r; 
    cin >> k >> r; 
        int i = 1;
        bool flag = false; 
        while(true)
        {
            int t = k*i;
            if(t % 10 == 0)
            {
                cout << i << endl; 
                break;
            }
            else if( (t-r) % 10 == 0)
            {
                cout << i << endl;
                break;
            }
            // else if( (t+r) % 10 == 0 && flag == true)
            // {
            //     cout << i++ << endl; 
            //     break; 
            // }
            else
            {
                
            }
            flag = true;
            i++;
        }       
}