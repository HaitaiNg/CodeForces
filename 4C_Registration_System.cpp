#include <vector>
#include <map>
#include <set> 
#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int n;
    cin >> n;
    string c; 
    map<string, int> charMap; 
    std::map<std::string, int>::iterator it; 
    while(n--)
    {
     cin >> c; 
     it = charMap.find(c); 
     if(it == charMap.end())
     {
         charMap.insert( {c, 1}); 
         cout << "OK" << endl;
     }
     else
     {
         int x = charMap[c]; 
         string temp = c + std::to_string(x); 
         cout << temp << endl;
         x++; 
         charMap.find(c)->second = x; 
         charMap.insert({temp, 1 }); 
     }
     
    }
}