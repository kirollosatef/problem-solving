#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
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
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = k - 1; i < n; i++)
  {
    if (arr[i] == 0)
    {
      i -= 2;
      continue;
    }
    if (i == n - 1)
    {
      cout << n << endl;
      break;
    }
    if (arr[i] > arr[i + 1])
    {
      cout << i + 1 << endl;
      break;
    }
  }
}