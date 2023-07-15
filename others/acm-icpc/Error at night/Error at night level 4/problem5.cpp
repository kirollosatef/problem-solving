#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
  float nr ,r ;
  int x , y ;
  int xx , yy , a;
  cout << "enter center point of a circle\n";
  cin >> x >> y ;
  cout << "enter r\n";
  cin >> r ;
  cout << "enter numper of points\n";
  cin >> a; 
  for (int i = 0 ; i <= a ; i++)
  {
  cout << "enter (X, Y)\n";
  cin >> xx>> yy ; 
  nr = pow((pow((x-xx),2)+pow((y-yy),2)),0.5);
  if (nr <= r)
  cout << "yes \n";
  else if (nr>r)
  cout << "no \n";
  }
  return 0 ;
}