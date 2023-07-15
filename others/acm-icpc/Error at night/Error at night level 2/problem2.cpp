#include <iostream>
using namespace std;
int main()
{
  int x, y;
  cout << "Enter x & Enter y\n";
  cin >> x >> y ;
  if (x > 0 && y > 0)
    cout << "the point in the frist quarter\n";
  else if (x < 0 && y > 0)
    cout << "the point in the second quarter\n";
  else if (x < 0 && y < 0)
    cout << "the point in the third quarter\n";
  else if (x > 0 && y < 0)
    cout << "the point in the fourth quarter\n";
  else if (x == 0 && (y > 0 || y < 0))
    cout << "the point in the y access\n";
  else if (y == 0 && (x > 0 || x < 0))
    cout << "the point in the x access\n";
  else if (x == 0 && y == 0)
    cout << "the point in the center\n";
  else 
  cout << "Error\n";
  return 0;
}