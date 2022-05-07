#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
int x[26], ans;
int main()
{
  string str;
  cin >> str;
  for (int i = 0; i < sz(str); i++)
    if (!x[str[i] - 'a'])
    {
      ans++;
      x[str[i] - 'a']++;
    }
  (ans % 2) ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";
}