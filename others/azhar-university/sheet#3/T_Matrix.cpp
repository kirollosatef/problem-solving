#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long n;
  cin >> n;
  long long x = 0, y = 0;
  long r = n, l = 1;
  for (long i = 1; i <= n * n; i++)
  {
    long long c;
    cin >> c;
    if (i % n == l % n)
      x += c;
    if (i % n == r % n)
      y += c;
    if (i % n == 0)
    {
      l++;
      r--;
    }
  }
  cout << abs(x - y);
}