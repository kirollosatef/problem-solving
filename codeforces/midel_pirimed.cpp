#include <iostream>
using namespace std;
int main()
{
  int x ; 
  cout <<"enter the number\n"; 
  cin >> x ; 
  for (int i = 1 ; i <= x ; i++)
  {
    for (int j = x - 1  ; j >= i ; j--)
    {
      cout << " " ;
    }
    for (int k = 1; k <= (2*i-1); k++)
    {
      cout << '*' ;
    }
    cout << "\n";
  }
  return 0;
}