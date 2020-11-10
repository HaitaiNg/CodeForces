#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    int n, t, p=0;
    cin >> n >> t; 

    vector<int> x;
    for(int i =0; i < n; i++)
    {
        int tmp; 
        cin >> tmp;
        x.push_back(tmp); 
    }

    while(p < t - 1)
    {
        p += x[p]; 
    }

    if( p == t-1) cout << "YES" << endl;
    else{
        cout << "NO" << endl;
    }
}