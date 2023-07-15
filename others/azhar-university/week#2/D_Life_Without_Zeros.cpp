#include <bits/stdc++.h>
using namespace std;
void ErsZeros(string &str)
{
  for (int i = 0; i < str.size(); i++)
    for (int j = i; j >= 0; j--)
      if (str[i] == '0')
        swap(str[i], str[i - j]);
}
int main()
{
  int x, y, z, zz;
  string strx, stry, strz;
  cin >> x >> y;
  z = x + y;
  // cout << x << " " << y << " " << z << endl;
  stringstream sx, sy, sz, sx1, sy1, ans;
  sx << x;
  sx >> strx;
  sy << y;
  sy >> stry;
  sz << z;
  sz >> strz;
  ErsZeros(strx);
  ErsZeros(stry);
  ErsZeros(strz);
  sx1 << strx;
  sx1 >> x;
  sy1 << stry;
  sy1 >> y;
  ans << strz;
  ans >> z;
  zz = x + y;
  // cout << x << " " << y << " " << z << endl;
  // cout << z << " " << zz << endl;
  if (z == zz)
    cout << "YES";
  else
    cout << "NO";
}