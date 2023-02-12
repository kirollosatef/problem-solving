#include <iostream>
#include <string>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == s[i - 1])
      {
        count++;
        s.erase(i - 1, 2);
        i = 0;
      }
    }
    if (count % 2 == 0)
      cout << "No" << endl;
    else
      cout << "Yes" << endl;
  }
}
