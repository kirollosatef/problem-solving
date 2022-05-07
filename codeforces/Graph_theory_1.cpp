#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
const int N = 100;
// adjacency matrix
bool adjMatrixBool[N][N];
int adjMatrix[N][N];
// adjacency Lists
vector<vector<int>> adjList;
vector<vector<pair<int, int>>> adjList2;
// edge list
struct edge
{
  int from, to, w;
};
int main()
{
  o_a;
}