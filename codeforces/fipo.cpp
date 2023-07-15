#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int fibo(int x)
{
  if (x == 1)
    return 0;
  else if (x == 2)
    return 1;
  else
    return fibo(x - 1) + fibo(x - 2);
}
int main()
{
  faster();
  int x;
  cin >> x;
  cout << fibo(x);
}