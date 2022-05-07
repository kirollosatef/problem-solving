/*2)
**Given a string S containing a set of Parentheses
**characters '(', ')', '{', '}', '[' and ']', determine if the input
**string is valid.
**An input string is valid if:
**• Open brackets must be closed by the same type of
**brackets.
**• Open brackets must be closed in the correct order
*/
#include <iostream>
using namespace std;
void xd(char &a, char &b)
{
  char temp = a;
  a = b;
  b = temp;
}
void bubble_sort(string &arr)
{
  for (int i = arr.size() - 1; i >= 0; i--)
  {
    for (int j = i - 1; j >= 0; j--)
      if (arr[i] < arr[j])
        xd(arr[i], arr[j]);
  }
}
int main()
{
  int ans = 0;
  string B;
  cin >> B;
  for (int i = 0; i < B.size(); i++)
  {
    if (B[i] == ')')
      B[i] = '(';
    else if (B[i] == ']')
      B[i] = '[';
    else if (B[i] == '}')
      B[i] = '{';
  }
  bubble_sort(B);
  cout << B <<"\n";
  for (int i = 0; i < B.size(); i++)
  {
    if (B[i] == B[i + 1])
    {
      ans += 2;
      i++;
    }
  }
  if (ans == B.size())
  {
    cout << "true";
    return 0;
  }
  cout << "false";
  return 0;
}