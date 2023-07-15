#include <iostream>
#include <cmath>
using namespace std;
int kam(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int main()
{
  long long c;
  cin >> c;
  int ans[c];
  for (int i = 0; i < c; i++)
  {
    long long num, h, cont = 1;
    cin >> num;
    h = kam(num);
    for (int j = 0; j < 1;)
    {
      if (num < 2050)
      {
        ans[i] = -1;
        j = 1;
      }
      else if (num == 2050 * pow(10, (h - 4)))
      {
        ans[i] = cont;
        j = 1;
      }
      else if (num > 2050 * pow(10, (h - 4)))
      {
        num -= 2050 * pow(10, (h - 4));
        cont++;
        h = kam(num);
        if (num == 0)
        {
          ans[i] = cont;
          j = 1;
        }
      }
      else if (num < 2050 * pow(10, (h - 4)))
      {
        num = num - 2050;
        h = kam(num);
        cont++;
        if (num == 0)
        {
          ans[i] = cont;
          j = 1;
        }
      }
    }
  }
  for (int i = 0; i < c; i++)
  {
    cout << ans[i] << endl;
  }
}