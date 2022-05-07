#include <iostream>
using namespace std;
unsigned long long fac(long long x)
{
  if (x == 0)
    return 1;
  return x * fac(x - 1);
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long x;
    cin >> x;
    x = fac(x);
    cout << x << endl;
  }
}