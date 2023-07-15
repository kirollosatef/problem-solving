#include <bits/stdc++.h>
using namespace std;
bool IS(int &x)
{
  string str;
  stringstream ss;
  ss << x;
  ss >> str;
  for (int i = 0; i < str.size(); i++)
    if (str[i] != '4' && str[i] != '7')
      return 0;
  return 1;
}
int main()
{
  bool ok = 0;
  int x, y;
  cin >> x >> y;
  for (int i = x; i <= y; i++)
    if (IS(i))
    {
      cout << i << " ";
      ok = 1;
    }
  if (!ok)
    cout << -1;
}