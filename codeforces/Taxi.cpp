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
  int n;
  cin >> n;
  int arr[n];
  int prifx[5] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    prifx[arr[i]]++;
  }
  int ans = 0;
  ans += min(prifx[3], prifx[1]);
  prifx[3] -= ans;
  prifx[1] -= ans;
  ans += (prifx[2] / 2);
  prifx[2] = prifx[2] % 2;
  ans += prifx[4];
  if (prifx[3] > 0)
    ans += prifx[3];
  if (prifx[2] == 1 && prifx[1] >= 2)
  {
    ans++;
    prifx[1] -= 2;
    prifx[2]--;
  }
  if (prifx[2] == 1 && prifx[1] == 1)
  {
    ans++;
    prifx[1] -= 1;
    prifx[2] -= 1;
  }
  if (prifx[2] > 0)
    ans += prifx[2];
  ans += prifx[1] / 4;
  prifx[1] = prifx[1] % 4;
  if (prifx[1] > 0)
    ans++;
  cout << ans;
}
