#include <iostream>
using namespace std ; 
int fip ( int ); 
int main ()
{
  int n ; 
  cout << "enter n \n";
  cin>> n ;
  cout << fip (n);
}
int fip (int x )
{
  if (x <= 2 )
  return x ; 
  int a = x - 1 ; 
  int b = x - 2 ; 
  return a + b ; 
}