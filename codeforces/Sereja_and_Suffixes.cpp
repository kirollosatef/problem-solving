#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sz(v) (v).size()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
typedef long long ll;
int pd[100000];
bool is[100000];
int main()
{
  o_a;
  int n, m;
  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  for (int i = n - 1; i >= 0; i--)
  {
    if (is[arr[i]])
      pd[i] = pd[i + 1];
    else
    {
      is[arr[i]] = 1;
      pd[i] = pd[i + 1] + 1;
    }
  }
  // for (int i = 0; i < n; i++)
  // cout << pd[i] << " ";
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    cout << pd[x - 1] << endl;
  }
}