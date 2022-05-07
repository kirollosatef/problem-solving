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
  int n, k;
  cin >> n >> k;
  int arr[n], sum = INT_MAX, indx = 1;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 0; i < n - k - 1; i++)
  {
    int sum2 = 0;
    for (int j = i; j < i + k; j++)
      sum2 += arr[j];
    if (sum2 < sum)
    {
      sum = (arr[i] + arr[i + 1] + arr[i + 2]);
      indx = i + 1;
    }
  }
  cout << indx << endl;
}