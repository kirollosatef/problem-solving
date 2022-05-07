#include <iostream>
using namespace std;
int SS(int n)
{
  int sum = 0;
  while (n != 0)
  {
    sum += (n % 10);
    n = ((n - (n % 10)) / 10);
  }
  return sum;
}
int DD(int n)
{
  int sum = 0;
  while (n != 0)
  {
    sum++;
    n = ((n - (n % 10)) / 10);
  }
  return sum;
}
int main()
{
  int t;
  cin >> t;
  int ans[t] = {0};
  for (int k = 0; k < t; k++)
  {
    long long x;
    int count = 9;
    cin >> x;
    if (x <= 9)
    {
      ans[k] = x;
    }
    else
    {
      for (int i = 10; i <= x; i++)
      {
        if (i % 10 == 1)
        {
          if (SS(i) == DD(i))
            count++;
        }
        else if ((i % (i % 10)) == 0 && i % 10 != 0)
          count++;
      }
      ans[k] = count;
    }
  }
  for (int i = 0; i < t; i++)
    cout << ans[i] << endl;
}