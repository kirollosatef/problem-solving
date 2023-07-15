#include <bits/stdc++.h>
#define vec(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define lp(i, srt, end, dir) \
  for (int i = srt; (dir ? (i < end) : (i > end)); (dir ? i++ : i--))
#define lpe(i, srt, end, dir) \
  for (int i = srt; (dir ? (i <= end) : (i >= end)); (dir ? i++ : i--))
#define cinarr(n, arr) for (int i = 0; i < n; cin >> arr[i], i++)
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ins insert
#define F first
#define S second
#define whilet \
  int t;       \
  cin >> t;    \
  while (t--)
using namespace std;
typedef long long ll;

// number of edges = number of nodes - 1
// num of connected commpons = 1

ll n, m;
vec(vec(ll)) adj(10005);
vec(bool) vis(10005);

void dfs(ll node)
{
  vis[node] = true;
  for (int i = 0; i < sz(adj[node]); i++)
  {
    ll ch = adj[node][i];
    if (!vis[ch])
      dfs(ch);
  }
}

ll numCon()
{
  ll cnt = 0;
  for (int i = 1; i <= n; i++)
  {
    if (!vis[i])
    {
      dfs(i);	
      cnt++;
    }
  }
  return cnt;
}

int main()
{
  o_a;
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    ll u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  if (m != (n - 1))
    NO;
  else
  {
    ll ans = numCon();
    ans == 1 ? YES : NO;
  }
}
