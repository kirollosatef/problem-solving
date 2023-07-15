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

// create a function takes a list return a max k subarray sum ???
int main()
{
  o_a;
  int n, k;
  cin >> n >> k;
  vec(int) arr(n);
  cinarr(n, arr);
  if (k > n)
  {
    cout << "invalid k" << endl;
    return 0;
  }
  int maxSum = 0;
  for (int i = 0; i < n - k + 1; i++)
  {
    int currSum = 0;
    for (int j = i; j < i + k; j++)
    {
      currSum += arr[j];
    }
    maxSum = max(maxSum, currSum);
  }
  cout << maxSum << endl;
  return 0;
}
