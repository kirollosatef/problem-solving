#include <iostream>
using namespace std;
int main()
{
  long x;
  string str;
  cin >> x >> str;
  int arr[26] = {0};
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      arr[str[i] - 'a']++;
    else if (str[i] >= 'A' && str[i] <= 'Z')
      arr[str[i] - 'A']++;
    else
    {
      cout << "NO";
      return 0;
    }
  }
  for (int i = 0; i < 26; i++)
    if (arr[i] == 0)
    {
      cout << "NO";
      return 0;
    }
  cout << "YES";
  return 0;
}