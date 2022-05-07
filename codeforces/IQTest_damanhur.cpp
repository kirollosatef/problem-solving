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
  int n, even = 0, indx_ev = 0, indx_od = 0, odd = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    (x % 2) ? (odd++, indx_od = i) : (even++, indx_ev = i);
  }
  (odd < even) ? cout << indx_od : cout << indx_ev;
}