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
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  int x, y;
  cin >> x >> y;
  if (x > y)
    swap(x, y);
  int r = 0, l = 0;
  for (int i = x - 1; i < y - 1; r += arr[i], i++)
    ;
  for (int i = y - 1; i < n; l += arr[i], i++)
    ;
  for (int i = 0; i < x - 1; l += arr[i], i++)
    ;
  cout << min(r, l) << endl;
}