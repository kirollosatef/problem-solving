// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   long long n;
//   cin >> n;
//   (n % 2) ? cout << 0 : cout << (1ll << n);
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x;
  cin >> x;
  if (x % 2)
    cout << 0;
  else
  {
    int ans = pow(2, x / 2);
    cout << ans;
  }
}