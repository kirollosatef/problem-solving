// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//✔  cout << 0 << " " << 0 << " " << n;
// }
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void seq(vector<long long> &fepo, long long &n)
{
  long long f1 = 0, f2 = 1;
  while (f1 <= n)
  {
    fepo.pb(f1);
    long long temp = f2;
    f2 += f1;
    f1 = temp;
  }
}
int main()
{
  long long n;
  cin >> n;
  vector<long long> fepo;
  seq(fepo, n);
  for (long i1 = 0; i1 < fepo.size(); i1++)
    for (long i2 = 0; i2 < fepo.size(); i2++)
      for (long i3 = 0; i3 < fepo.size(); i3++)
        if (fepo[i1] + fepo[i2] + fepo[i3] == n)
        {
          cout << fepo[i1] << " " << fepo[i2] << " " << fepo[i3] << endl;
          return 0;
        }
  cout << "I'm too stupid to solve this problem";
  return 0;
}