#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str = "CMY";
  int x, y, ans = 0, indx = 0;
  cin >> x >> y;
  char s[x * y];
  for (int i = 0; i < x * y; i++)
    cin >> s[i];
  for (int i = 0; i < 3; i++)
    ans += count(s, s + x * y, str[i]);
  (ans > 0) ? cout << "#Color" : cout << "#Black&White";
}