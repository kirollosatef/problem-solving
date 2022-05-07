#include <iostream>
using namespace std;
int main()
{
  int n, b1 = 0, b2 = 0;
  cin >> n;
  int card[n];
  for (int i = 0; i < n; cin >> card[i], i++)
    ;
  int s = 0, e = (n - 1);
  for (int i = 0; i < n; i++)
  {
    if ((i + 1) % 2 != 0)
    {
      if (card[s] > card[e])
      {
        b1 += card[s];
        s++;
      }
      else
      {
        b1 += card[e];
        e--;
      }
    }
    else
    {
      if (card[s] > card[e])
      {
        b2 += card[s];
        s++;
      }
      else
      {
        b2 += card[e];
        e--;
      }
    }
  }
  cout << b1 << " " << b2;
}
