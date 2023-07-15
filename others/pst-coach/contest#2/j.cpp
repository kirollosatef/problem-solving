#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  bool b = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < s.size() - 1; i++)
    if (s[i] != s[i + 1])
    {
      cout << "YES" << endl;
      cout << s[i] << s[i + 1] << endl;
      return 0;
    }

  cout << "NO" << endl;

  return 0;
}