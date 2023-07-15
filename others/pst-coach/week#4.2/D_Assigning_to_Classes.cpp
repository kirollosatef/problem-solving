#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[2 * n];
    for (int i = 0; i < 2 * n; i++)
      cin >> a[i];
    sort(a, a + 2 * n);
    cout << (a[n] - a[n - 1]) << endl;
  }
}