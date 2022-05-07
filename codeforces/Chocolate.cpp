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
  int n, sum = 0;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 1; i < n; i++)
  {
    if (arr[i - 1] == 1 && arr[i] == 0 && arr[i + 1] == 1)
      sum += 2;
  }
  if (sum == 0)
    sum++;
  cout << sum;
}