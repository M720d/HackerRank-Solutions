#include <iostream>
using namespace std;

void max_num(int arr[], int s)
{
 int f = 0;
  int l = arr[0];

  for (int i = 1; i < s; i++)
  {
      if (l <= arr[i])
      {
          l = arr[i] ;
      }
      
  }

  for (int i = 0; i < s; i++)
  {
      if (l == arr[i])
      {
          f++;
      }
  }

  cout << f ;
}


int main()
{
int n  ;
cin >> n ;

int a[n];

for (int i = 0; i < n ; i++)
{
    cin >> a[i] ; 
}

 max_num(a,n);


    return 0;
}