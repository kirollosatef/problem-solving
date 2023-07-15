/**
 * By:kero_atef
 * Date:2022/06/25-16:11
 * https://codeforces.com/contest/701/problem/A
 */
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
  ll n, count = 0;
  cin >> n;
  int arr[n], nums[101] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    count += arr[i];
  }
  int target = count / (n / 2);
  for (int i = 0; i < n; i++)
  {
    if (nums[i] == 0)
    {
      for (int j = 0; j < n; j++)
      {
        if (nums[j] == 0 && i != j)
        {
          if (arr[i] + arr[j] == target)
          {
            nums[i] = nums[j] = 1;
            cout << i + 1 << " " << j + 1 << endl;
            break;
          }
        }
      }
    }
  }
}