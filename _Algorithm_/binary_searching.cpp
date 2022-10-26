#include <iostream>
#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
int find_position(int arr[], int n, int f)
{
}
int main()
{
  int n, ans = -1;
  cin >> n;
  int arr[n] = {0};
  for (int i = 0; i < n; i++)
    arr[i] = i + 1;
  int f;
  cin >> f;
  int low = 0, high = n - 1, mid;
  while (low <= high)
  {
    mid = (low + high) / 2;
    int guess = arr[mid];
    if (guess == f)
    {
    
      ans = mid;
      break;
    }
    if (guess > f)
      high = mid - 1;
    else
      low = mid + 1;
  }
  cout << ans;
}
