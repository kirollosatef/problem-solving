#include<iostream>
using namespace std ; 
int main ()
{
  int a , xa=1;
  cout << "enter number of Bunnies\n";
  cin >> a ;
  int arra[a];
  cout << "enter their Jump Range \n" ;
  for (int i = 0; i < a; i++)
  {
    cin >> arra[i];
  }
  for (int i =0 ; i< a ; i++)
{
  xa = xa * arra[i];
}
cout << xa / a;
return 0 ;
}