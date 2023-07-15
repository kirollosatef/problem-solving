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
  int n, ans = INT_MAX;
  string str;
  cin >> n >> str;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 1; i < n; i++)
  {
    int temp = INT_MAX;
    if ((str[i - 1] == 'R' && str[i] == 'L'))
      temp = (arr[i] - arr[i - 1]) / 2;
    ans = min(ans, temp);
  }
  (ans == INT_MAX) ? cout << -1 : cout << ans;
}