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
int main()
{
  o_a;
  int n, m;
  cin >> n >> m;
  int arr[n] = {0};
  while (m--)
  {
    int x;
    cin >> x;
    for (int i = x - 1; i < n && !arr[i]; arr[i] = x, i++)
      ;
  }
  for (int i = 0; i < n; cout << arr[i] << " ", i++)
    ;
}