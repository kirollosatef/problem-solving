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
int degetsNumber(int n)
{
  int count = 0;
  while (n > 0)
  {
    n /= 10;
    count++;
  }
  return count;
}
int main()
{
  o_a;
  int n;
  cin >> n;
  int count = degetsNumber(n);
  cout << count << endl;
}