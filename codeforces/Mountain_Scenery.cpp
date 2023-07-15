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
  int arr[2 * n + 1];
  for (int i = 0; i < 2 * n + 1; i++)
    cin >> arr[i];
  for (int i = 1; i < 2 * n + 1; i += 2)
    if (arr[i] - arr[i + 1] > 1 && arr[i] - arr[i - 1] > 1 && k > 0)
    {
      k--;
      arr[i]--;
    }
  for (int i = 0; i < 2 * n + 1; i++)
    cout << arr[i] << " ";
}