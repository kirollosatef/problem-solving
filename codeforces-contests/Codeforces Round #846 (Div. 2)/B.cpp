#include <bits/stdc++.h>
#define vec(type) vector<type>
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define read(file) ifstream cin(file)
#define fill(x, i) memset(x, i, sizeof(x))
#define lp(i, srt, end, dir) \
  for (int i = srt; (dir ? (i < end) : (i > end)); (dir ? i++ : i--))
#define lpe(i, srt, end, dir) \
  for (int i = srt; (dir ? (i <= end) : (i >= end)); (dir ? i++ : i--))
#define cinarr(n, arr) for (int i = 0; i < n; cin >> arr[i], i++)
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ins insert
#define F first
#define S second
#define whilet \
  int t;       \
  cin >> t;    \
  while (t--)
using namespace std;
typedef long long ll;
int GCD(vector<int> arr, int k)
{
  int n = arr.size();
  if (k == 1)
  {
    int sum = 0;
    for (int i = 0; i < n; i++)
      sum += arr[i];
    return sum;
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    vector<int> left, right;
    for (int j = 0; j <= i; j++)
      left.push_back(arr[j]);
    for (int j = i + 1; j < n; j++)
      right.push_back(arr[j]);
    int leftSum = GCD(left, 1);
    int rightSum = GCD(right, k - 1);
    ans = max(ans, __gcd(leftSum, rightSum));
  }
  return ans;
}
int main()
{
  o_a;
  int n;
  cin >> n;
  vec(int) arr(n);
  cinarr(n, arr);
  int ans = GCD(arr, 3) / 3;
  // for (int i = 3; i <= n; i++)
  //   ans = max(ans, (GCD(arr, i) / i));
  cout << ans << endl;
}
