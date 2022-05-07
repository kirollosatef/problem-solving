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
int main()
{
  o_a;
  int n, mx = 0;
  cin >> n;
  int frq[1001] = {0};
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    frq[x]++;
    mx = max(mx, frq[x]);
  }
  if (mx > (n + 1) / 2)
    cout << "NO";
  else
    cout << "YES";
}