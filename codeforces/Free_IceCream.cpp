#include <iostream>
using namespace std;
int main()
{
  long long n, x, dis = 0;
  cin >> n >> x;
  while (n--)
  {
    char ch;
    long long y;
    cin >> ch >> y;
    if (ch == '+')
      x += y;
    else if (ch == '-')
      if (x >= y)
        x -= y;
      else if (x < y)
        dis++;
  }
  cout << x << " " << dis << endl;
}