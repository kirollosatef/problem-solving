#include <iostream>
using namespace std;
int main ()
{
  int x , y ;
  int ari[100];
  cin >> x ;
  for (y = 0 ; x != 0; y++)
  {
    ari [y]= x%2;
    x=x/2;
  }
  for (y = y-1; y >= 0; y--)
  {
  cout << ari[y]<< " ";
  }
  return 0 ;
}