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

vector<int> vis(10005);
vector<int> col(10005);
vector<vector<int>> adj(10005);

bool dfs(int node, int cl)
{
  vis[node] = 1;
  col[node] = cl;
  for (int i = 0; i < adj[node].size(); i++)
  {
    int ch = adj[node][i];
    if (!vis[ch])
    {
      if (dfs(ch, cl ^ 1) == false)
        return false;
    }
    if (col[node] == col[ch])
      return false;
  }
  return true;
}

int main()
{
  o_a;
  int t;
  cin >> t;
  for (int test = 1; test <= t; test++)
  {
    // clear lists
    for (int i = 0; i < 10005; i++)
    {
      adj[i].clear();
      vis[i] = 0;
      col[i] = 0;
    }
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
      int u, v;
      cin >> u >> v;
      adj[u].pb(v);
      adj[v].pb(u);
    }
    bool ans;
    for (int i = 1; i <= n; i++)
    {
      if (!vis[i])
        ans = dfs(i, 1);
      if (ans == false)
        break;
    }
    cout << "Scenario #" << test << ":" << endl;
    if (ans == true)
      cout << "No suspicious bugs found!" << endl;
    else
      cout << "Suspicious bugs found!" << endl;
  }
}
