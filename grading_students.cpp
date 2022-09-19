#include <iostream>
using namespace std ;

void print(int mr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << mr[i] << endl ;
    }
    
}

void check( int m[] , int n)
{

    for (int i = 0; i < n; i++)
    {
        if (m[i] >= 38)
        {
            if ((m[i] + 2) % 5 == 0)
            {
                m[i] = m[i] + 2;
            }

            else if ((m[i] + 1 ) % 5 == 0)
            {
                m[i] = m[i] + 1;
            }
        }
    }

    print( m , n);
}

int main()
{

int n ;
cin >> n ;

int arr[n] ;
for (int i = 0; i < n; i++)
{
    cin >> arr[i] ;
}

check( arr , n) ;


    return 0;
}