#include <bits/stdc++.h>
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define lpu(i, x, n) for (int i = (x); i < (int)(n); i++)
#define lpd(i, x, n) for (int i = (x); i >= (int)(n); i--)
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  int ch1[25] = {0}, ch2[25] = {0};
  string s1, s2;
  cin >> s1 >> s2;
  for (int i = 0; i < sz(s1); i++)
    ch1[s1[i] - 'a']++;
  for (int i = 0; i < sz(s2); i++)
    ch2[s1[i] - 'a']++;
  for (int i = 0; i < 25; i++)
  {
    if (ch1[i] != ch2[i])
    {
      cout << false;
      return 0;
    }
  }
  cout << true;
}