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
  string str;
  cin >> str;
  bool b = 0;
  for (int i = 1; i < sz(str); i++)
    if (islower(str[i]))
    {
      b = 1;
      break;
    }
  if (b)
    cout << str;
  else
  {
    for (int i = 1; i < sz(str); i++)
      str[i] = tolower(str[i]);
    isupper(str[0]) ? str[0] = tolower(str[0]) : str[0] = toupper(str[0]);
    cout << str << endl;
  }
}