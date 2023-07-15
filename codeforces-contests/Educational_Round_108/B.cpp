#include <iostream>
using namespace std;
int main()
{
  int ok;
  cin >> ok;
  string ans[ok];
  for (int i = 0; i < ok; i++)
  {
    int n, m, k, sum = 0;
    cin >> n >> m >> k;
    for (int j = 0; j < 1;)
    {
      if (n == 1 && m == 1 && sum == k)
      {
        ans[i] = "YES";
        j++;
        sum = 0;
      }
      else if (n == 1 && m == 1 && (sum > k || sum < k))
      {
        ans[i] = "NO";
        j++;
        sum = 0;
      }
      else
      {
        if (n >= m)
        {
          n--;
          sum += m;
        }
        else
        {
          m--;
          sum += n;
        }
      }
    }
  }
  for (int i = 0; i < ok; i++)
  {
    cout << ans[i] << endl;
  }
}