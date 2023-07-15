#include <iostream>
#include <cmath>
#define new '\n';
using namespace std;
int ff(int n)
{
  int a = sqrt(n);
  if ((a * a) == n)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  int t;
  cin >> t;
  //getchar();
  while (t--)
  {
    int n;
    int a, c = 0;
    cin >> n;
    while (n--)
    {
      cin >> a;
      if (ff(a) == 0)
      {
        c++;
      }
    }
    if (c >= 1)
    {
      cout << "YES" << new;
    }
    else
    {
      cout << "NO" << new;
    }
  }
}