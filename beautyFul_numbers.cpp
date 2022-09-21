#include <iostream>
using namespace std ;


void check( int arr[] , int n , int d )
{

 int c = 0 ;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((arr[k] - arr[j]) == d && (arr[j] - arr[i]) == d)
                {
                    c++;
                }
            }
        }
    }

    cout << c;
}


int main()
{

int n , d , c= 0; 
cin >> n >> d ;

int arr[n] ;

for (int i = 0; i < n; i++)
{
    cin >> arr[i] ;
}

check( arr , n , d ) ;

    return 0 ;
}