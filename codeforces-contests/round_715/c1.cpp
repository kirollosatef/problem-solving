#include <iostream>
using namespace std;
int main()
{
  int n, m, k, x, s;
  cin >> n >> m >> k >> x >> s;
  int a[m], b[m], c[k], d[k];
  int aa=0, bb=0, cc=0, dd=0;
  for (int i = 0; i < m; cin >> a[i], i++)
    ;
  for (int i = 0; i < m; cin >> b[i], i++)
    ;
  for (int i = 0; i < k; cin >> c[i], i++)
    ;
  for (int i = 0; i < k; cin >> d[i], i++)
    ;
  cout << "\n";
  for (int i = 0; i < 1;)
  {
    for (int q = 0; q < m - 1 ; q++)
    {
      for (int j = q + 1; j < m; j++)
      {
        if (a[q] > a[j] && b[q] < s)
        {
          aa = a[q];
          bb = b[q];
        }
      }
    }
    for (int q = 0; q < k -1; q++)
    {
      for (int j = q +1; j < k; j++)
      {
        if (c[q] > c[j] && d[q] < s)
        {
          cc = c[q];
          dd = d[q];
        }
      }
    }
    i = 1 ;
  }
  cout << aa << " " << bb << " " << cc <<" "<< dd;
}