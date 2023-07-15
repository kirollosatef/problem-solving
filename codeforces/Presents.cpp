/**
**By:kero_atef ✝
**Date:2021/11/07-13:53
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int in[n], out[n] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> in[i];
    out[in[i] - 1] = i + 1;
  }
  for (int i = 0; i < n; i++)
    cout << out[i] << " ";
}