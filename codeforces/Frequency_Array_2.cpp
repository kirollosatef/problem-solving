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
void SW(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int arr1[n], arr2[n];
  for (int i = 0; i < n; cin >> arr1[i], i++)
    ;
  for (int i = 0; i < n; cin >> arr2[i], i++)
    ;
  int countarr[MAXELEMNT(arr1, n)] = {0};
  for (int i = 0; i < n; i++)
    countarr[arr1[i]]++;
  
}