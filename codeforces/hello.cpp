#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  faster();
  string s;
  char str[] = {'h', 'e', 'l', 'l', 'o'};
  int ch[5] = {0}, indx = 0;
  cin >> s;
  for (int i = 0; i < sz(s); i++)
  {
    if (s[i] == str[indx])
      ch[indx]++;
    if (s[i] == str[indx + 1] && ch[indx] > 0)
    {
      indx++;
      ch[indx]++;
    }
  }
  for (int i = 0; i < 5; i++)
    if (ch[i] == 0)
    {
      cout << "NO";
      return 0;
    }
  cout << "YES";
}