#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cin >> x;
  string s;
  cin >> s;
  int cnt[5] = {0};
  for (int i = 0; i < x; i++)
  {
    cnt[s[i] - 'a']++;
  }
  sort(cnt, cnt + 5);
  cout << cnt[0] << " " << cnt[4];
}
