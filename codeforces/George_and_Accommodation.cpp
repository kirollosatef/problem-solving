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
  int rooms, ans = 0;
  cin >> rooms;
  while (rooms--)
  {
    int x, y;
    cin >> x >> y;
    if (y - x >= 2)
      ans++;
  }
  cout << ans;
}