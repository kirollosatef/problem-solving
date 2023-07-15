#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x, sum;
  cout << "Enter the number \n";
  cin >> x;
  if (x >= 0)
    {x = x;
  cout << "the sum = " << sum << "\n";}
  else
    x = abs(x);
  cout << "the sum = " << sum << "\n";
  for (int i = 0; i < x; i++)
  {
    sum = sum + i;
  }
  return 0;
}
/*else if (x < 0)
  {
    for (int i = x + 1; i < 0; i++)
    {
      sum = sum + i;
    }
    cout << "the sum = " << sum << "\n";
  }
  else
    cout << "the sum = 0\n";
  return 0;
}*/