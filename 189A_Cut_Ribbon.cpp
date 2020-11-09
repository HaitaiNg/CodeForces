/// Solution was inspired by Harun-or-Rashid
//Source: https://mysolutions4you.wordpress.com/2018/05/21/codeforces-solution-189a-cut-ribbon/


#include <iostream> 

using namespace std;

int main()
{
    int n, a, b, c; 
    cin >> n >> a >> b >> c; 
    int i, p=0; 
    i = std::min( a, min(b,c)); 
    i = n / i; 
    for(int x = i; x >= 0; x--)
    {
        for(int y = 0; y <= i; y++)
        {
            int z =abs((n-(a*x+b*y))/c);
            if((a*x+b*y+c*z)==n){
               p=max(p,x+y+z);
            } 
        }
    }
    cout << p << endl; 
}