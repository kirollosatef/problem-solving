#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  long long x, y, s;
  cin >> x >> y >> s;
  long long sum = abs(x) + abs(y);
  (sum <= s && !((s - sum) % 2)) ? cout << "Yes" : cout << "No";
}