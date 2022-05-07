#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  faster();
  int t;
  cin >> t;
  while (t--)
  {
    ll frq[1000000] = {0};
    ll n, ok = 1;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      frq[arr[i]]++;
      if (frq[arr[i]] > 1)
        ok = 0;
    }
    (ok) ? cout << "prekrasnyy" << endl : cout << "ne krasivo" << endl;
  }
}