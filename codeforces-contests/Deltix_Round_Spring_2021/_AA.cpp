#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    string s;
    cin >> n >> m >> s;
    for (int i = 0; i < n; i++)
    {
      if (s[i - 1] == '1' && s[i] == '0' && s[i + 1] == '1')
      {
        s[i] = '*';
        i++;
      }
    }
    for (int j = 0; j < m; j++)
    {
      for (int i = 0; i < n; i++)
      {
        if (s[i] == '1')
        {
          if (s[i - 1] == '0')
            s[i - 1] = '1';
          if (s[i + 1] == '0')
          {
            s[i + 1] = '1';
            i++;
          }
        }
      }
    }
    for (int i = 0; i < n; i++)
    {
      if (s[i] == '*')
        s[i] = '0';
      cout << s[i];
    }
    cout << endl;
  }
}