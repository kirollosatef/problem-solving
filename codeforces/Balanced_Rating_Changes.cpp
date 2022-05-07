#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define all(str) str.begin(), str.end()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  int n, j = 0;
  cin >> n;
  int arr[n], arr2[n] = {0}, sum = 0;
  for (int i = 0; i < n; i++)
    cin >> arr[i], arr2[i] = arr[i], arr[i] /= 2, sum += arr[i];
  if (sum > 0)
  {
    while (sum > 0)
    {
      if ((arr2[j] % 2) != 0 && arr2[j] < 0)
      {
        arr[j]--;
        sum--;
      }
      j++;
    }
  }
  else if (sum < 0)
  {
    while (sum < 0)
    {
      if (arr2[j] % 2 != 0 && arr2[j] > 0)
      {
        arr[j]++;
        sum++;
      }
      j++;
    }
  }
  for (int i = 0; i < n; i++)
    cout << arr[i] << "\n";
}
