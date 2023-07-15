#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long n, t, sum = 0;
  cin >> n >> t;
  for (int i = 0; i < n; i++)
  {
    long long x;
    cin >> x;
    if (x >= t)
      sum++;
  }
  cout << (sum / t) << endl;
}