#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
// int frq1[26], frq2[26];
int main()
{
  string x, y, z;
  cin >> x >> y >> z;
  x += y;
  sort(x.begin(), x.end());
  sort(z.begin(), z.end());
  (x == z) ? cout << "YES" : cout << "NO";
}
// void faster()
// {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
// }
// int main()
// {
//   faster();
//   string x, y, z;
//   cin >> x >> y >> z;
//   for (int i = 0; i < sz(x); i++)
//     frq1[x[i] - 'A']++;
//   for (int i = 0; i < sz(y); i++)
//     frq1[y[i] - 'A']++;
//   for (int i = 0; i < sz(z); i++)
//     frq2[z[i] - 'A']++;
//   for (int i = 0; i < 26; i++)
//     if (frq1[i] != frq2[i])
//     {
//       cout << "NO";
//       return 0;
//     }
//   cout << "YES";
// }