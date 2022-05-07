/*2)	Write a sorting program that accepts n numbers from the user and sort them according to the user will. 
(Don’t use built-in functions)*/
#include <iostream>
using namespace std;
int main()
{
  int x, y, z;
  char a;
  cout << "enter number 1 , number 2 and numbrer 3 \n";
  cin >> x >> y >> z;
  cout << "if you want progressive enter > \n if you want descending enter < \n";
  cin >> a;
  if (x > y > z && a == '>')
    cout << x << y << z;
  else if (z > y > x && a == '>')
    cout << x << y << z;
  else if (y > z > x && a == '>')
    cout << x << y << z;
  else
    cout << "Error";
  return 0;
}