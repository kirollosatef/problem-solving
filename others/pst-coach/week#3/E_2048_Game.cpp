#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, sum = 0, ok = 0;
    cin >> x;
    while (x--)
    {
      int s;
      cin >> s;
      (s < 2048) ? sum += s : (s == 2048) ? ok = 1 : sum;
    }
    (sum >= 2048 || ok) ? cout << "YES" << endl : cout << "NO" << endl;
  }
}