/**
**By:kero_atef ✝
**Date:2022/04/30-18:02
**/
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
  int x;
  cin >> x;
  int arr[4];
  for (int i = 3; i >= 0; i--)
  {
    arr[i] = x % 10;
    x /= 10;
  }
  int ok = 1;
  while (ok)
  {
    arr[3]++;
    if (arr[3] == 10)
    {
      arr[3] = 0;
      arr[2]++;
    }
    if (arr[2] == 10)
    {
      arr[2] = 0;
      arr[1]++;
    }
    if (arr[1] == 10)
    {
      arr[1] = 0;
      arr[0]++;
    }
    if (arr[0] != arr[1] && arr[0] != arr[2] && arr[0] != arr[3] && arr[1] != arr[2] && arr[1] != arr[3] && arr[2] != arr[3])
    {
      cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;
      ok = 0;
    }
  }
}