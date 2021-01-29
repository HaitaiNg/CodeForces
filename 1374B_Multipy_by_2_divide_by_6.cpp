#include <algorithm>
#include <iostream>
#include <sstream> 
#include <string> 
#include <vector>

using namespace std; 

int main()
{
    int t, n; 
    cin >> t; 
    while(t--)
    {
        cin >> n; 
        int s1 = 0, s2 = 0 ;
        while(n % 2 == 0){
            s1++; 
            n /= 2; 
        }
        while(n % 3 == 0){
            s2++;
            n /= 3; 
        }
        if(n == 1){
            if(s1 <= s2){
                int answer = min(s1, s2); 
                s1 -= answer;
                s2 -= answer; 
                answer += 2*s2; 
                cout << answer << "\n"; 
            }
            else if(s1 > s2){
                cout << "-1" << "\n"; 
            }
        }
        else{
            cout << "-1 " << "\n"; 
        }
a
    }
    return 0; 
}