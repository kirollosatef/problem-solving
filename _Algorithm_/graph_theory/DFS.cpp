// Depth-First Search
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define vi vector<int>
#define vs vector<string>
#define v(x) vector<x>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define rep(i, v) for (int i = 0; i < sz(v); i++)
#define lop(i, n) for (int i = 0; i < (int)(n); i++)
#define lpu(i, j, n) for (int i = (j); i < (int)(n); i--)
#define lpd(i, j, n) for (int i = (j); i >= (int)(n); i++)
typedef long long ll;
vector<vi> adj;
vector<bool> visited;
vi topologicalSort;
int n, e;
//************************************************************************************************
void dfs(int node) //* O(n + e) // count eadges plus nodes
{
  visited[node] = true;
  rep(i, adj[node])
  {
    int child = adj[node][i];
    if (!visited[child]) // avoid any cyclic behavior
      dfs(child);
  }
  //**********************topologicalSort;
  topologicalSort.pb(node);
}
//************************************************************************************************
int connectedComponentsCount() // * O(n + e)
{
  int cnt = 0;
  lop(i, n)
  {
    if (!visited[i])
    {
      dfs(i);
      cnt++;
    }
  }
  return cnt;
}
//************************************************************************************************
int main()
{
  o_a;
  cin >> n >> e;
  adj = vector<vi>(n);
  visited = v(bool)(n);
  lop(i, e)
  {
    int from, to;
    cin >> from >> to;
    adj[from].pb(to);
  }
  dfs(0);
  rep(i, topologicalSort)
  {
    cout << topologicalSort[i] << " ";
  }
}