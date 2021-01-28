#include <algorithm>
#include <iostream>
#include <sstream> 
#include <string> 
#include <vector>

using namespace std; 

int main()
{
    int t, n = 0, a[100]; 
    cin >> t;
    while(t--)
    {
        cin >> n; 
        for(int i = 0; i < n; i++){
            cin >> a[i]; 
        }

        sort(a, a + n); 
        vector<int> team;
        int difference = INT_MAX; 
        for(int i = 1; i < n; i++)
        {
            difference = min(difference, a[i] - a[i-1]); 
        }
        cout << difference << endl;

    }
    return 0;
}