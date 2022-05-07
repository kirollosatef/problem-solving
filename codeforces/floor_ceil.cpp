#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  float a, b, x, y , xfloor;
  int floor;
  cin >> a >> b;
  floor = a / b;
  xfloor= a /b ;
  if (xfloor == 1.0)
  {
    cout << "floor " << a << " / " << b << " = " << floor << "\n";
    cout << "ceil " << a << " / " << b << " = " << floor << "\n";
  }
  else
  {
    cout << "floor " << a << " / " << b << " = " << floor << "\n";
    cout << "ceil " << a << " / " << b << " = " << floor + 1 << "\n";
  }
  if (floor % 2 != 0)
    cout << "round " << a << " / " << b << " = " << setprecision(1) << xfloor << "\n";
  else
    cout << "round " << a << " / " << b << " = " << setprecision(1) << xfloor + 1 << "\n";
  /*x = a / b;
  y = floor + 0.5;
  if (x >= y)
    cout << "round " << a << " / " << b << " = " << floor + 1 << "\n";
  else if (x < y)
    cout << "round " << a << " / " << b << " = " << floor << "\n";*/
  return 0;
}