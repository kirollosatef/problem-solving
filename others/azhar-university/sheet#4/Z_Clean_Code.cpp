#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
  vector<string> str;
  int y = 1;
  int r = 0, l = 0;
  while (y)
  {
    string x;
    getline(cin, x);
    str.pb(x);
    r += count(x.begin(), x.end(), '{');
    l += count(x.begin(), x.end(), '}');
    if (r - l == 0 && l != 0)
      y = 0;
  }
  y = str.size();
  bool ok = true;
  for (int i = 0; i < y; i++)
  {
    if (str[i][0] == '/' && str[i][1] == '/')
      continue;
    else if (str[i] == "}")
    {
      cout << "}";
      continue;
    }
    else if (str[i][str[i].size() - 1] == '/' && str[i][str[i].size() - 2] == '*')
      ok = 1;
    else if (str[i][0] == '/' && str[i][1] == '*')
      ok = 0;
    else if (str[i][0] == '*' && str[i][1] == '/')
      ok = 1;
    else if (str[i] == "")
      continue;
    else if (!ok)
      continue;
    else
    {
      ok = 1;
      for (int j = 0; j < str[i].size(); j++)
      {
        if (str[i][j] == '/' && str[i][j + 1] == '/')
          break;
        else if (str[i][j] == '/' && str[i][j + 1] == '*')
          ok = 0;
        else if (str[i][j] == '*' && str[i][j + 1] == '/')
          ok = 1;
        else if (!ok)
          break;
        else
          cout << str[i][j];
      }
      cout << endl;
    }
  }
}