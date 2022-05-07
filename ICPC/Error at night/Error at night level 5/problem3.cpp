#include <iostream>
using namespace std;
int main()
{
  string s;
  int ss;
  cout << "enter s\n";
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '(' )
      s[i] = ')';
    else if (s[i]=='{')
      s[i] = '}';
    else if (s[i] == '[')
      s[i] = ']';
  }
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == s[s.size() - 2])
        ss ++ ; 
      else if (s[i] == s[i + 1])
        ss++;
      else
        ss--;
    }
  if (ss = s.size())
  cout << "true";
  else
  cout << "false";
  return 0 ; 
}