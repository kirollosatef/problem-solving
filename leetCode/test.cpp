#include <bits/stdc++.h>
using namespace std;
void backspaceCompare(string s)
{
  int ok = 0;
  while (!ok && s.length() > 0)
  {
    for (int i = 1; i < s.length(); i++)
      if (s[i] == '#')
        s.erase(i - 1, 2);
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '#')
      {
        ok = 0;
        break;
      }
      ok = 1;
    }
  }
  cout << s << endl;
}
int main()
{
  string s = "ac##";
  backspaceCompare(s);
}
