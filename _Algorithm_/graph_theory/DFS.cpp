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

enum class EdgeType
{
  Tree,
  Backward,
  Forward,
  Cross
};

class Graph
{
public:
  int nodes, edges, timer = 0;
  vector<vector<int>> adj;
  vector<bool> vis;
  vector<int> topo_sort;
  vector<int> start;
  vector<int> end;
  vector<EdgeType> edge_type;

  Graph(int nodes, int edges)
  {
    this->nodes = nodes;
    this->edges = edges;
    adj.resize(nodes);
    vis.resize(nodes);
    start.resize(nodes);
    end.resize(nodes);
  }

  void addEdge(int u, int v)
  {
    adj[u].pb(v);
    adj[v].pb(u);
  }

  void DFS(int node)
  {
    vis[node] = true;
    for (int i = 0; i < sz(adj[node]); i++)
    {
      int child = adj[node][i];
      if (!vis[child])
        DFS(child);
    }
    topo_sort.pb(node);
  }

  int numConnComp()
  {
    int cnt = 0;
    for (int i = 0; i < nodes; i++)
    {
      if (!vis[i])
      {
        DFS(i);
        cnt++;
      }
    }
    return cnt;
  }

  void DFSEdgeClassification(int node)
  {
    start[node] = 1;
    for (int i = 0; i < sz(adj[node]); i++)
    {
      int child = adj[node][i];
      if (!vis[child])
      {
        edge_type.pb(EdgeType::Tree);
        DFSEdgeClassification(child);
      }
      else
      {
        if (start[child] < start[node] && end[child] > end[node])
          edge_type.pb(EdgeType::Backward);
        else if (start[child] > start[node] && end[child] < end[node])
          edge_type.pb(EdgeType::Forward);
        else if (start[child] > start[node] && end[child] > end[node])
          edge_type.pb(EdgeType::Cross);
      }
    }
    end[node] = timer++;
  }
};

int main()
{
  o_a;
  int n, e;
  cin >> n >> e;
  Graph g(n, e);
  for (int i = 0; i < e; i++)
  {
    int u, v;
    cin >> u >> v;
    g.addEdge(u - 1, v - 1);
  }
  cout << g.numConnComp() << endl;
  vector<int> topo = g.topo_sort;
  for (auto it : topo)
    cout << it + 1 << " ";
  return 0;
}
