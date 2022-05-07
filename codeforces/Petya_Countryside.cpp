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
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int mx = 0;
  for (int i = 0; i < n; i++)
  {
    int sum = 0, r = 0, l = 0;
    for (int j = i;; j++)
    {
      if (arr[j] >= arr[j + 1])
        r++;
      else
        break;
    }
    for (int j = i;; j--)
    {
      if (arr[j] >= arr[j - 1])
        l++;
      else
        break;
    }
    mx = max(mx, l + r + 1);
    // cout << arr[i] << " => " << l << " - " << r << "\n";
  }
  cout << mx;
}