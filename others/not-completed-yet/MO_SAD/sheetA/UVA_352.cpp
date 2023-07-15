/**
**By:kero_atef ✝
**Date:2022/01/03-01:30
**/
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
/*********************************************/
int n, cnt;
char adj[30][30];
bool vis[30][30];
int dx[8] = {0, 0, 1, -1, 1, -1, 1, -1}; //*loop in 8 diractions
int dy[8] = {1, -1, 0, 0, 1, -1, -1, 1};
/*********************************************/
bool valid(int i, int j)//*to check if it out of array or not
{
  return i >= 0 && j >= 0 && i < n && j < n;
}
/*********************************************/
void DFS(int i, int j)
{
  vis[i][j] = true;
  lpu(k, 0, 8)//*loop only for 8 directions
  {
    int x = dx[k] + i;
    int y = dy[k] + j;
    if (!vis[x][y] && valid(x, y) && adj[x][y] == '1')
      DFS(x, y);
  }
}
/*********************************************/
void connectedComponentsCount() // how many connected components in grid ??
{
  lpu(i, 0, n)
  {
    lpu(j, 0, n)
    {
      if (!vis[i][j] && adj[i][j] == '1')
      {
        DFS(i, j);
        cnt++;
      }
    }
  }
}
/*********************************************/
int main()
{
  o_a;
  int t = 1;
  while (cin >> n)
  {
    if (n == -1)
      break;
    lpu(i, 0, n)
    {
      lpu(j, 0, n)
      {
        cin >> adj[i][j];
      }
    }
    memset(vis, 0, sizeof(vis));
    cnt = 0;
    connectedComponentsCount();
    printf("Image number %d contains %d war eagles.\n", t++, cnt);
  }
}