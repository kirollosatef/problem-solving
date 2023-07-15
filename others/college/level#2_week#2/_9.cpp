#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
  string x, xnew;
  int y;
  cin >> x >> y;
  for (int i = 0; i < y; i++)
  {
    xnew += x;
  }
  long long nn = stoi(xnew), sum = 0, one, countt = 1;
  for (int i = 0; i < 1;)
  {
    one = (nn % 10);
    sum += one;
    nn = ((nn - (nn % 10)) / 10);
    if (nn == 0 && (sum / 10) != 0)
    {
      nn = sum;
      sum = 0;
      countt++;
    }
    else if (nn == 0 && (sum / 10) == 0)
    {
      cout << countt;
      return 0;
    }
  }
}