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
  int d1, d2, d3;
  cin >> d1 >> d2 >> d3;
  int _1 = d1 * 2 + d2 * 2, _2 = d1 + d2 + d3, _3 = d2 * 2 + d3 * 2, _4 = d3 * 2 + d1 * 2;
  int min_ab, min_cd, min;
  min_ab = _1 < _2 ? _1 : _2;
  min_cd = _3 < _4 ? _3 : _4;
  min = min_ab < min_cd ? min_ab : min_cd;
  cout << min << endl;
  // cout << min(min(_1, _2), min(_3, _4));
}