#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m; 
    cin >> n >> m; 
    int start = 1; 
    int result = 0; 

    for(int i = 0; i < m; i++)
    {
        int current = 0; 
        cin >> current; 
        if(current >= start)
        {
            result += current - start; 
        }
        else
        {
            result += n - (start - current); 
        }
        start = current; 
        
    }
    cout << result << endl;
}