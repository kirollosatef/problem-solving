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
bool ifAllDistinct(int x)
{
  int _1 = x % 10;
  x /= 10;
  int _2 = x % 10;
  x /= 10;
  int _3 = x % 10;
  x /= 10;
  int _4 = x % 10;
  x /= 10;
  if (_1 == _2 || _1 == _3 || _1 == _4 || _2 == _3 || _2 == _4 || _3 == _4)
    return false;
  return true;
}
int main()
{
  o_a;
  int year;
  cin >> year;
  int nextYear = year + 1;
  while (!ifAllDistinct(nextYear))
    nextYear++;
  cout << nextYear << "\n";
}
