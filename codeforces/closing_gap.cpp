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
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    double sum = 0;
    cin >> n;
    for (int x, i = 0; i < n; cin >> x, i++, sum += x)
      ;
    sum /= n;
    (sum == int(sum)) ? cout << 0 << endl : cout << 1 << endl;
  }
}
/**
 * int main()
 *{
 *  o_a;
 *  int t;
 *  cin >> t;
 *  while (t--)
 *  {
 *    int n, sum = 0;
 *    int mn = 0, mx = 0;
 *    cin >> n;
 *    int arr[n] = {0};
 *    for (int i = 0; i < n; i++)
 *    {
 *      cin >> arr[i];
 *      sum += arr[i];
 *    }
 *    sum /= n;
 *    for (int i = 0; i < n; i++)
 *    {
 *      if (arr[i] > sum)
 *        mx += arr[i] - sum;
 *      else
 *        mn += abs(sum - arr[i]);
 *    }
 *    (mn == mx) ? cout << 0 << endl : cout << 1 << endl;
 *  }
 *}
 */