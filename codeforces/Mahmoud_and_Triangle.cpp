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
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  sort(arr, arr + n);
  for (int i = 0; i < n - 2; i++)
  {
    if (arr[i] + arr[i + 1] > arr[i + 2])
      if (arr[i + 1] + arr[i + 2] > arr[i])
        if (arr[i] + arr[i + 2] > arr[i + 1])
        {
          cout << "YES";
          return 0;
        }
  }
  cout << "NO";
}
