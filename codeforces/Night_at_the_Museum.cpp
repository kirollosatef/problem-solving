#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  string x;
  cin >> x;
  int sum = 0;
  int to = 97, ot;
  for (int i = 0; i < x.size(); i++)
  {
    to = abs(x[i] - to);
    ot = abs(26 - to);
    if (to <= ot)
      sum += to;
    else
      sum += ot;
    to = x[i];
  }
  cout << sum;
}