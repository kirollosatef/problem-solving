#include <iostream>
void smol(char &i);
using namespace std;
int main()
{
  string a, b;
  long long aa = 0, bb = 0;
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++)
  {
    smol(a[i]);
    smol(b[i]);
  }
  for (int i = 0; i < a.size(); i++)
  {
    for (int j = 0; j < a.size(); j++)
    {
      if (a[i] == b[j])
      {
        aa = aa + 1;
        bb = bb + 1;
      }
      if (a[i] > b[j])
      {
        aa = aa + 1;
        bb = bb - 1;
      }
      else if (a[i] < b[j])
      {
        bb = bb + 1;
        aa = aa - 1;
      }
    }
  }
  if (aa == bb)
    cout << 0;
  else if (aa < bb)
    cout << -1;
  else if (aa > bb)
    cout << 1;
  return 0;
}
void smol(char &i)
{
  if (i >= 'A' && i <= 'Z')
    i = i + 32;
}