#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> x; 
    int c, c1, c2;
    cin >> c >> c1 >> c2; 
    x.push_back(c);
    x.push_back(c1); 
    x.push_back(c2); 

    std::sort(x.begin(), x.end()); 
    int mid = (x.size() / 2);  

    int distance = 0; 
    for(int& i : x)
    {
        if( i  == x[mid])
        {

        }
        else{
            distance += abs(i - x[mid]); 
        }
    }
    cout << distance << endl;
}