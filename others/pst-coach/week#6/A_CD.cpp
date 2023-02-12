#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int n, m, ans;
vector<int> sol, best, t;
vector<int>::iterator it;
void calc(int i, int cur)
{
  if (i == m)
  {
    if (cur > ans)
    {
      ans = cur;
      best.clear();
      for (int x = 0; x < sz(sol); x++)
        best.pb(sol[x]);
    }
    return;
  }
  calc(i + 1, cur); //skip track i
  if (t[i] + cur <= n)
  {
    sol.pb(t[i]); //choses
    calc(i + 1, cur + t[i]);
    sol.erase(sol.end()); //backtrack
  }
}
int main()
{
  o_a;
  // while (1)
  // {
    cin >> n >> m;
    for (int j = 0; j < m; j++)
    {
      int c;
      cin >> c;
      t.pb(c);
    }
    calc(0, 0);
    for (int j = 0 ; j < sz(best) ; j++)
      cout << best[j] << " ";
    cout << "sum:" << ans << endl;
  // }
}