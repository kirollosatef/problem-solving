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
v(bool) vis;
  v(v(int)) matrix;
void DFS(int node)
{
}
int main()
{
  o_a;
  int x;
  cin >> x;
  for (int i = 0; i < x; i++)
    for (int j = 0; j < x; j++)
    {
      int z;
      cin >> z;
      matrix[i].pb(z);
    }
}