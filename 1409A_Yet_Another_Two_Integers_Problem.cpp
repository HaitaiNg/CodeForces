#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t; 
    cin >> t; 
    while(t--)
    {
        int a, b;
        cin >> a >> b; 
        if(a > b){
            int tmp = a; 
            a = b;
            b = tmp;
        }
        int y = 0; 
        if(a + 10 < b)
        {
            int x = b - a; 
            y = x / 10; 
            a += 10*(y); 
        }
        int moves = y; 
        int i = 10;
        while(a < b)
        {
                if(a + i <= b)
                {
                    a += i; 
                    moves++; 
                }
                else{
                    i--; 
                }
        }
        cout << moves << endl;
    }

}