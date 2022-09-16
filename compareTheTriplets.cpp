#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3], b[3], c=0 , f=0 ;
    
    for(int i=0 ; i<3; i++)
    {
        cin >> a[i];
    }
    
    for(int i=0 ; i<3; i++)
    {
        cin >> b[i];
    }
    
    for(int i=0 ; i<3; i++)
    {
        if(a[i] > b[i] )
        {
            c++;
        }
        
        if(a[i] < b[i] )
        {
            f++;
        }
        
        if(a[i] == b[i] )
        {
            int r=0;
        }
    }
    
    cout << c << " "<< f;
    
    return 0;
}

