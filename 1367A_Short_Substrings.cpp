#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string b; 
        cin >> b; 
        if(b.length() == 2)
        {
            cout << b << endl; 
        }
        else{
            string returnString = "";
            returnString += b.at(0); 
            for(int i = 1; i < b.length() - 1; i += 2)
            {
                returnString += b[i];
            }
            returnString += b[b.length() - 1];
            cout << returnString << endl;
        }
     
    }
}