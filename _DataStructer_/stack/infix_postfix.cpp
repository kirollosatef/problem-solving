// ?:code: https://github.com/Adel-Nasim/Data-Structures/blob/master/Infix%20To%20Postfix.txt
#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
using namespace std;
typedef long long ll;
// todo: add brackets operators
bool isOpe(char x)
{
  if (x == '-' || x == '+' || x == '/' || x == '*' || x == '(' || x == ')')
    return 1;
  else
    return 0;
}
bool isGreat(char x, char y)
{
  if (x == '*' && y == '-')
    return 1;
  else if (x == '*' && y == '+')
    return 1;
  else if (x == '/' && y == '-')
    return 1;
  else if (x == '/' && y == '-')
    return 1;
  else if (x == '(')
    return 1;
  else if (y == '(')
    return 1;
  else
    return 0;
}
string postfix(string infix)
{
  stack<char> ope;
  string post = "";
  for (int i = 0; i < sz(infix); i++)
  {
    if (isOpe(infix[i]))
    {
      if (ope.empty() || isGreat(infix[i], ope.top()))
      {
        ope.push(infix[i]);
      }
      else
      {
        if (infix[i] == ')')
        {
          while (ope.top() != '(')
          {
            post += ope.top();
            ope.pop();
          }
          ope.pop();
        }
        else
        {
          post += ope.top();
          ope.pop();
          ope.push(infix[i]);
        }
      }
    }
    else
      post += infix[i];
  }
  int n = ope.size();
  for (int i = 0; i < n; i++)
  {
    post += ope.top();
    ope.pop();
  }
  return post;
}
int main()
{
  string in, out;
  cout << "enter operation: ";
  cin >> in;
  out = postfix(in);
  cout << "infix: " << in << "\npostfix: " << out;
}