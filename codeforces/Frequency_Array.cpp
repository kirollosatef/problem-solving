#include <bits/stdc++.h>
using namespace std;
int MAXELEMNT(int arr[], int n)
{
  int max = arr[0];
  for (int i = 1; i < n; i++)
    if (arr[i] > max)
      max = arr[i];
  return max + 1;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x, y;
  cin >> x >> y;
  int arr[x];
  for (int i = 0; i < x; cin >> arr[i], i++)
    ;
  int countarr[MAXELEMNT(arr, x)] = {0};
  for (int i = 0; i < x; i++)
    countarr[arr[i]]++;
  cout << countarr[y];
}