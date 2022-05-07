#include <bits/stdc++.h>
using namespace std;
void reverse_string(string &str)
{
  for (int i = 0; i < str.size() / 2; i++)
    swap(str[i], str[str.size() - i - 1]);
}
long long decimal(string &str)
{
  long long j = 0, ans = 0;
  for (int i = str.size() - 1; i >= 0; i--)
  {
    if (str[i] == '1')
      ans = /*(int)*/ (ans + pow(2, j));
    j++;
  }
  return ans;
}
string binary(long long &x)
{
  string str = "";
  while (x != 0)
  {
    (x % 2 == 0) ? str += '0' : str += '1';
    x = /*(int)*/ (x / 2);
  }
  reverse_string(str);
  return str;
}
long long XOR(long long x, long long y)
{
  long long ans;
  string strx = binary(x), stry = binary(y);
  string rslt = "";
  int ix = strx.size() - 1, iy = stry.size() - 1;
  while (max(ix, iy) >= 0)
  {
    if (min(ix, iy) >= 0)
    {
      if (strx[ix] != stry[iy])
        rslt += '1';
      else if (strx[ix] == stry[iy])
        rslt += '0';
    }
    else if (max(ix, iy) >= 0)
    {
      if (ix > iy)
        rslt += strx[ix];
      else if (iy > ix)
        rslt += stry[iy];
    }
    ix--;
    iy--;
  }
  reverse_string(rslt);
  ans = decimal(rslt);
  return ans;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--)
  {
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; cin >> arr[i], i++)
      ;
    if (arr[n - 2] == arr[n - 1])
    {
      cout << "YES\n";
    }
    else
    {
      long long xr;
      for (int i = 0; i < n - 2; i++)
      {
        xr = XOR(arr[i], arr[i + 1]);
        arr[i + 1] = xr;
      }
      (arr[n - 2] == arr[n - 1]) ? cout << "YES\n" : cout << "NO\n";
    }
  }
}