/**
**By:kero_Atef
**Date:2021/06/04-02:32
**/
#include <bits/stdc++.h>
using namespace std;
bool ch[26];
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string str;
  int count = 0;
  getline(cin, str);
  for (int i = 1; i < str.size() - 1; i += 3)
    if (!ch[str[i] - 'a'])
    {
      ch[str[i] - 'a'] = 1;
      count++;
    }
  cout << count << endl;
}