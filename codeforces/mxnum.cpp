#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
int mn = -1e9;
void FIO()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int maximum(int arr[], int n, int indx)
{
  if (indx == n)
    return mn;
  if (mn < arr[indx])
  {
    mn = arr[indx];
    maximum(arr, n, ++indx);
  }
  else
    maximum(arr, n, ++indx);
}
int main()
{
  FIO();
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  cout << maximum(arr, n, 0);
}