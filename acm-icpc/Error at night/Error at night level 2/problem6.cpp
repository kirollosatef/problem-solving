#include <iostream>
using namespace std;
int main()
{
  int x, fac = 1;
  cout << "Enter the number \n";
  cin >> x;
  if (x == 0)
    cout << "the factorial = 1";
  else
  {
    for (int i = 1; i <= x; i++)
    {
      fac = fac * i;
    }
    cout << "the factorial = " << fac << "\n";
  }
  return 0;
}