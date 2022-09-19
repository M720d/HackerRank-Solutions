#include <bits/stdc++.h>

using namespace std;

void apple( int app [] , int s , int t , int m , int a)
{
    int c = 0 ;

    for (int i = 0; i < m; i++)
    {
        app[i] = app[i] + a ;

        if (app[i] >= s && app[i] <= t )
        {
            c++;
        }
        
    }
    cout << c << endl ;
}

void orange(int org[], int s, int t, int n, int b)
{
    int k = 0;

    for (int j = 0; j < n; j++)
    {
        org[j] = org[j] + b;

        if (org[j] >= s && org[j] <= t)
        {
            k++;
        }
    }

    cout << k << endl;
}

int main()
{
    int s, t, a, b, m, n;
    cin >> s >> t;  // position of house 
    cin >> a >> b;   //a ,b position of apple and orange tree 
    cin >> m >> n;   // number if fruit in  app and orange

    int app[m], org[n];

    for (int i = 0; i < m; i++)
    {
        cin >> app[i];
    }

    for (int j = 0; j < n; j++)
    {
        cin >> org[j];
    }

    apple( app , s , t , m , a ) ;
    orange(org, s, t, n, b);
    return 0 ;
}
