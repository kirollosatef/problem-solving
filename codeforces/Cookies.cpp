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
  int n, sum = 0, ans = 0;
  cin >> n;
  vi vec(n);
  for (int i = 0; i < n; i++)
    cin >> vec[i], sum += vec[i];
  for (int i = 0; i < n; i++)
    (!((sum - vec[i]) % 2)) ? ans++ : ans;
  cout << ans;
}