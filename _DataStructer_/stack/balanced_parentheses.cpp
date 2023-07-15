#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
// Balanced Parentheses Using Stack {([ ])}
// Stack implementation
bool arePair(char ope, char clo)
{
  if (ope == '{' && clo == '}')
    return 1;
  else if (ope == '[' && clo == ']')
    return 1;
  else if (ope == '(' && clo == ')')
    return 1;
  else
    return 0;
}
bool areBalanced(string str)
{
  stack<char> s;
  for (int i = 0; i < sz(str); i++)
  {
    if (str[i] == '{' || str[i] == '[' || str[i] == '(')
      s.push(str[i]);
    else if (str[i] == '}' || str[i] == ']' || str[i] == ')')
    {
      if (s.empty() || !arePair(s.top(), str[i]))
        return 0;
      else
        s.pop();
    }
  }
  return s.empty() ? 1 : 0;
}
int main()
{
  string ex;
  cout << "enter exp: ";
  cin >> ex;
  if (areBalanced(ex))
    cout << "balanced!!";
  else
    cout << "not balanced!!";
}