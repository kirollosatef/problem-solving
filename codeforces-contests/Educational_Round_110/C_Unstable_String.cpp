#include <bits/stdc++.h>
using namespace std;
void QQ(string &x)
{
  string y = "01";
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] == '0')
    {
      if (i % 2 == 0)
        y = "01";
      else
        y = "10";
      break;
    }
    if (x[i] == '1')
    {
      if (i % 2 == 1)
        y = "01";
      else
        y = "10";
      break;
    }
  }
  for (int i = 0; i < x.size(); i++)
    if (x[i] == '?')
      x[i] = y[i % 2];
}
bool pri(string x)
{
  for (int i = 0; i < x.size(); i++)
    if (x[i] == x[i + 1])
      return false;
  return true;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    string str;
    cin >> str;
    string nn[((str.size() * (str.size() + 1)) / 2)];
    int ans = 0, xx = 0;
    for (int k = 1; k <= str.size(); k++)
    {
      for (int i = 0; i <= str.size() - k; i++)
      {
        for (int j = 0; j < k; j++)
          nn[xx] += str[j + i];
        xx++;
      }
    }
    for (int i = 0; i < xx; i++)
    {
      QQ(nn[i]);
      if (pri(nn[i]) == 1)
        ans++;
    }
    cout << ans << endl;
  }
}