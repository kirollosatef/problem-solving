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
double amount(double x, double m) // to round to multiple of a specified amount لاقرب قيمه
{
  return round(x / m) * m;
}
int main()
{
  o_a;
  double x, m;
  cin >> x;
  cout << "round : " << round(x) << endl; // away from zero
  cout << "floor : " << floor(x) << endl; // rounding down
  cout << "ceil  : " << ceil(x) << endl;  // rounding up
  cout << "trunc : " << trunc(x) << endl; // remove fraction
  cin >> m;
  cout << "specified amount : " << amount(x , m) << endl;
}