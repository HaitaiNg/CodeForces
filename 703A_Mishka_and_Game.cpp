#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int m=0,p=0,pWin=0,mWin=0; 
    while(n--)
    {
        cin >> m >> p;
        if(p > m) pWin++;
        else if( m == p)
        {

        }
        else{
            mWin++; 
        }
    }
    if(mWin > pWin) cout << "Mishka" << endl;
    else if(pWin > mWin) cout << "Chris" << endl; 
    else{
        cout << "Friendship is magic!^^" << endl;
    }

}