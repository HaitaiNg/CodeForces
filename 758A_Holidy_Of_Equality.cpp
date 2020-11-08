#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main()
{
    int n, t; 
    cin >> n; 
    vector<int> x; 
    while(n--)
    {
        cin >> t;
        x.push_back(t); 
    }
    sort(x.begin(), x.end()); 
    int burles = 0;
    int max = x[x.size() - 1];  
    for(int i = x.size() - 1; i >= 0; i--)
    {
        if(max != x[i]) burles += abs(max - x[i]); 
        else
        {
            /* code */
        }
        
    }
    cout << burles << endl; 
}