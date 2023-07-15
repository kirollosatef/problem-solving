//ker-o_a-tef
#include <bits/stdc++.h> //https://codeforces.com/contest/26/problem/B
using namespace std;
#define pd push_back
#define sz(v) (v).size()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
typedef long long ll;
int main()
{
  o_a;
  string str;
  cin >> str;
  int l = 0, r = 0, ans = 0;
  for (int i = 0; i < sz(str); i++)
  {
    if (str[i] == '(')
      l++;
    else if (str[i] == ')' && l)
    {
      r++;
      l--;
    }
  }
  cout << r * 2 << endl;
}