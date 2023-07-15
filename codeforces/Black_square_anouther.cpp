#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//   long long sm = 0;
//   int a[4];
//   cin >> a[0] >> a[1] >> a[2] >> a[3];
//   char c;
//   while (cin >> c)
//     sm += a[c - '0' - 1];
//   cout << sm;
// }
int A[4];
int main()
{
  for (int i = 0; i < 4; i++)
    cin >> A[i];
  string s;
  cin >> s;
  int res = 0;
  for (char c : s)
    res += A[c - '1'];
  cout << res << '\n';
  return 0;//<3
}