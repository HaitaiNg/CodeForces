#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, l; 
    cin >> n >> l; 
    vector<int> lanterns; 
    while(n--)
    {
        int la;
        cin >> la; 
        lanterns.push_back(la);    
    }
    sort(lanterns.begin(), lanterns.end()); 
    int x = lanterns[0]; 
    int y = l - lanterns[lanterns.size() - 1]; 
    
    double maxDifference = -1;
    for(int i = 1; i <= lanterns.size() - 1; i++)
    {
        double c = abs(lanterns[i] - lanterns[i-1]); 
        if( c > maxDifference) maxDifference = c;
    }

    maxDifference /= 2; 
    double d = max(x,y); 
    double maxx = std::max( maxDifference, d); 
    cout.precision(20); 
    cout << maxx << endl;

}