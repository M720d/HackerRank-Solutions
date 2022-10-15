#include<iostream>
using namespace std ;

void diff( long long int aarr[] , int n)
{
    int x = INT16_MAX ;

    for (int i = 0; i < n; i++)
    {
        int c = 0 ;

        for (int j =  i+1 ; j < n; j++)
        {
            c = arr[i] - arr[j]
            if (c<=x)
            {
                x= c ;
            }
        }
        
    }
    
}

int main()
{

int n ;
cin >> n ;

long long int arr[n] ; ;

for (int i = 0; i < n; i++)
{
    cin >> arr[i] ;
}

diff( arr , n) ;

    return 0 ;
}