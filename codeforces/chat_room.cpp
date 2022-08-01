#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
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
