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
void findSecondMinNum(int arr[], int n)
{
  int min1 = INT_MAX, min2 = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min1)
    {
      min2 = min1;
      min1 = arr[i];
    }
    else if (arr[i] < min2 && arr[i] != min1)
      min2 = arr[i];
  }
  if (min2 == INT_MAX)
    cout << "NO";
  else
    cout << min2;
  cout << min2 << endl;
}
int main()
{
  o_a;
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  findSecondMinNum(arr, n);
}
void insertingSort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}