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

int n, e;
vector<vector<int>> adj(10005);
vector<bool> vis(10005);

void dfs(int node, int &cnt)
{
  vis[node] = 1;
  cnt++;
  for (int i = 0; i < adj[node].size(); i++)
  {
    int ch = adj[node][i];
    if (!vis[ch])
      dfs(ch, cnt);
  }
}

int bigCom()
{
  int cnt = 0, ans = 0;
  for (int i = 1; i <= n; i++)
  {
    if (!vis[i])
      dfs(i, cnt);
    ans = max(ans, cnt);
    cnt = 0;
  }
  return ans;
}

int main()
{
  o_a;
  whilet
  {
    // clear lists brfore evry test
    for (int i = 0; i <= 10005; i++)
    {
      vis[i] = 0;
      adj[i].clear();
    }
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
      int u, v;
      cin >> u >> v;
      adj[u].pb(v);
      adj[v].pb(u);
    }
    int ans = bigCom();
    cout << ans << endl;
  }
}
