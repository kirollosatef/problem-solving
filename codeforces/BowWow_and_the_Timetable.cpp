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
ll decimal(string str)
{
  ll sum = 0, ans;
  reverse(all(str));
  sum += (str[0] == '1');
  for (int i = 1; i < sz(str); i++)
    sum += pow(2 * (str[i] - '0'), i);
  return sum;
}
int main()
{
  o_a;
  string str;
  cin >> str;
  cout << decimal(str);
  // ll num = decimal(str), k = 0, ss = 0;
  // while (ss < num)
  // {
  //   ss = pow(4, k);
  //   k++;
  // }
  // cout << --k;
}