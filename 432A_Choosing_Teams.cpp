#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main()
{
    int n, k;
    cin >> n >> k; 
    vector<int> students; 
    while(n--)
    {
        int tmp; 
        cin >> tmp; 
        if(tmp+k <= 5)
        {
            students.push_back(tmp); 
        }
    }
    std::sort(students.begin(), students.end()); 
    cout << students.size() / 3 << endl;
}