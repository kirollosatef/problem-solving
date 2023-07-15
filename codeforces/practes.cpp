#include <iostream>
using namespace std;
int main()
{
  string n;
  cin >> n;
  for (int i = 0; i < n.size(); i++)
  {
    if (n[i] == ')')
      n[i] = '(';
    else if (n[i] == ']')
      n[i] = '[';
    else if (n[i] == '}')
      n[i] = '{';
  }
  for (int i = n.size() - 1; i >= 0; i--)
  {
    for (int j = i - 1; j >= 0; j--)
    {
      if (n[i] < n[j])
        swap(n[i], n[j]);
    }
  }
  for (int i = 0; i < n.size(); i++)
  {
    if (n[i] == n[i + 1])
    {
      i++;
    }
    else
    {
      cout << "false";
      return 0;
    }
  }
  cout << "true";
  return 0;
}