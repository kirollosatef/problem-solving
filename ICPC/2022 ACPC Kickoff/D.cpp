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
ll l = 0, m = 500000000, r = 1000000000;
void solve(char ss)
{
  if (ss == '=')
  {
    cout << "! " << m << endl;
  }
  if (ss == '>')
  {
    l = m;
    m = (l + r) / 2;
    cout << m << endl;
  }
  if (ss == '<')
  {
    r = m;
    m = (l + r) / 2;
    cout << m << endl;
  }
}
int main()
{
  o_a;
  char c = '0';
  int count = 0;
  cout << m << endl;
  while (c != '=')
  {
    cin >> c;
    solve(c);
    count++;
  }
  cout << count;
  cout.flush();
}