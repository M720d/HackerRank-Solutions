#include <bits/stdc++.h>

using namespace std;

void cls( int a[] , int n , int k)
{
    int c =0 ; 

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0 )
        {
            c++ ;
        }
        
    }
    
    if ( k <= c)
    {
        cout << "NO" << endl ;
    }

    else {
        cout << "YES" << endl ;
    }
    
}
int main()
{

int t ;
cin >> t ;

while(t--)
{
    int n , k ; 
    cin >> n >> k ;

int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    
    cls( arr , n , k) ;
}

return 0 ;
}