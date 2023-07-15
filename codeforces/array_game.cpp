#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0)  ;
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  ll n;
  cin >> n;
  for (int i = 0, x; i < n; i++)
    cin >> x;
  if (n == 0)
    cout << "Alice";
  else
    (n % 2) ? cout << "Alice" : cout << "Bob";
}