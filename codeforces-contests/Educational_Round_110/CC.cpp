#include <iostream>
using namespace std;
int T;
string s;
main()
{
  cin >> T;
  while (T--)
  {
    cin >> s;
    long long a = 0, d = 0, e = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '0')
        e = i + 1;
      if (s[i] == '1')
        d = i + 1;
      a += i - min(d, e) + 1;
      swap(d, e);
    }
    cout << a << '\n';
  }
}