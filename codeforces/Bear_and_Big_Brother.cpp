#include <iostream>
using namespace std;
int main()
{
  int a, b, sum = 0;
  cin >> a >> b;
  for (int i = 0; i < 1;)
  {
    if (a > b)
    {
      cout << sum;
      i = 1;
    }
    else
    {
      a = a * 3;
      b = b * 2;
      sum++;
    }
  }
}