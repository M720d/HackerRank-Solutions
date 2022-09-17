#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n][n] , pri_sum=0 , sec_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            cin >> a[i][j];
        }    
    }

    for (int i = 0; i < n; i++)
    {
        pri_sum += a[i][i];
        sec_sum += a[i][n - i - 1];
    }

    // cout << "pri " << pri_sum;

    // cout << " sec " << sec_sum;

    int res = abs(pri_sum - sec_sum);

cout <<res;

    return 0;
}
