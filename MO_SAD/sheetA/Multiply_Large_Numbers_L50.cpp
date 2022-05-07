#include <bits/stdc++.h>
using namespace std;
string multiple(string num1, string num2)
{
  int lin1 = num1.size();
  int lin2 = num2.size();
  if (lin1 == 0 || lin2 == 0)
    return 0;
  vector<int> result(lin1 + lin2, 0); //? in reverse order
  int i1 = 0, i2 = 0;                 //? to find positions
  //* go from right to left
  for (int i = lin1 - 1; i >= 0; i--)
  {
    int carry = 0;
    int n1 = num1[i] - '0';
    //? To shift position to left after every multiplication of a digit in num2
    i2 = 0;
    for (int j = lin2 - 1; j >= 0; j--)
    {
      int n2 = num2[j] - '0';
      //? Multiply with current digit of first number and add result to previously stored result  at current position
      int sum = n1 * n2 + result[i1 + i2] + carry; //!important
      carry = sum / 10;
      result[i1 + i2] = sum % 10;
      i2++;
    }
    if (carry > 0) //? store carry in next cell
      result[i1 + i2] += carry;
    i1++; //? To shift position to left
  }       //✔end multiple
  int i = result.size() - 1;
  while (i >= 0 && result[i] == 0)
    i--; //?ignore '0's from the right
  if (i == -1)
    return 0;
  string ans = "";
  while (i >= 0)
    ans += to_string(result[i--]);
  return ans; //✔ DONE
}
int main()
{
  string x, y;
  cin >> x >> y;
  if ((x[0] == '-' || y[0] == '-') && (x[0] != '-' || y[0] != '-'))
    cout << '-';
  if (x[0] == '-')
    x.substr(1);
  if (y[0] == '-')
    y.substr(1);
  cout << multiple(x, y);
  return 0;
}