/*4)	write a program that accepts 2 numbers from the user and 
prints TRUE if one of the two numbers is 90 or the sum of the two numbers is 90. Else print FALSE.*/
#include <iostream>
using namespace std;
int main ()
{
  int x, y ;
  cout << "enter num1 & num2\n";
  cin >> x >> y ;
  if ( x + y == 90 || x == 90 || y== 90)
  cout << true ;
  else
  cout << false ;
  return 0;
}