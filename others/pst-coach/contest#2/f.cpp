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
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int ch[26] = {0};
    for (char c : s)
      ch[c - 'a']++;
    int a = 0;
    for (int i = 0; i < 26; i++)
    {
      a += min(ch[i], 2);
    }
    cout << a / 2 << '\n';
  }
}
