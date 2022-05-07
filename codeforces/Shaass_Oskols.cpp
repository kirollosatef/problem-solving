#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  long long arr[n + 2];
  arr[0] = 0;
  arr[n + 1] = 0;
  for (int i = 1; i < n + 1; cin >> arr[i], i++)
    ;
  int m;
  cin >> m;
  while (m--)
  {
    int xn, xm;
    cin >> xn >> xm;
    arr[xn - 1] += (xm - 1);
    arr[xn + 1] += (arr[xn] - xm);
    arr[xn] = 0;
  }
  for (int i = 1; i < n + 1; i++)
    cout << arr[i] << endl;
}