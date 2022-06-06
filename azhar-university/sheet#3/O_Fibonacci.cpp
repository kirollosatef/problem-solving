#include <iostream>
using namespace std;
int main()
{
  long long x, n1 = 0, n2 = 1, ans = 0;
  cin >> x;
  if (x <= 2)
    ans = x - 1;
  for (int i = 2; i < x; i++)
  {
    ans = (n1 + n2);
    n1 = n2;
    n2 = ans;
  }
  cout << ans;
}