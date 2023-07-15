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
  string n;
  cin >> n;
  int arr[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
  int ans = arr[n[0] - '0'] * arr[n[1] - '0'];
  cout << ans;
}