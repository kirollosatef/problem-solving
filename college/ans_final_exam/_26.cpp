#include <iostream>
#include <string>
using namespace std;
int main()
{
  int ans = 1;
  string str;
  getline(cin, str);
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == ' ')
    {
      ans++;
    }
  }
  cout << ans;
}