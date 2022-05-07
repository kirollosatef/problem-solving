#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n, ans = 0;
  cin >> n;
  int num[5] = {4, 6, 8, 12, 20};
  string poly[5] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
  while (n--)
  {
    string str;
    cin >> str;
    for (int i = 0; i < 5; i++)
      if (str == poly[i])
        ans += num[i];
  }
  cout << ans << endl;
}