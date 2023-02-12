#include <iostream>
using namespace std;
int ld(int n)
{
  if (n == 1)
    return 2;
  else if (n == 0 ||n == 6 || n == 9)
    return 6;
  else if (n == 8)
    return 7;
  else if (n == 2 || n == 3 || n == 5)
    return 5;
  else if (n == 7)
    return 3;
  else if ( n == 4)
    return 4;
}
int main()
{
  int t;
  cin >> t;
  int ans[t];
  for (int tt = 0; tt < t; tt++)
  {
    long long x, sum = 0;
    cin >> x;
    for (int i = 0; i < 1;)
    {
      int one = x % 10 ;
      sum += ld(one);
      x = ((x - (x % 10)) / 10);
      if (x == 0)
        {
          i++;
        }
    }
    ans[tt] = sum;
  }
  for (int i = 0; i < t; i++)
  {
    cout << ans[i] << endl;
  }
}