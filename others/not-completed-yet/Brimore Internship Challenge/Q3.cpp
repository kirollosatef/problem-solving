#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
string sum_string(string num1, string num2);
string multiple_string(string num1, string num2);
string power_string(string str, int n);
int main()
{
  o_a;
  int n, d;
  cin >> n >> d;
  string ans = "";
  for (int i = 1; i <= n; i++)
  {
    stringstream ss;
    string num;
    ss << i;
    ss >> num;
    string power = power_string(num, i);
    ans = sum_string(ans, power);
  }
  ans = ans.substr(sz(ans) - d, d);
  cout << ans;
}
string multiple_string(string num1, string num2)
{
  int n = sz(num1);
  int m = sz(num2);
  string ans(n + m, '0');
  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = m - 1; j >= 0; j--)
    {
      int temp = (num1[i] - '0') * (num2[j] - '0') + (ans[i + j + 1] - '0');
      ans[i + j + 1] = temp % 10 + '0';
      ans[i + j] += temp / 10;
    }
  }
  for (int i = 0; i < m + n; i++)
  {
    if (ans[i] != '0')
      return ans.substr(i);
  }
  return "0";
}
string sum_string(string num1, string num2)
{
  if (sz(num1) > sz(num2))
    swap(num1, num2);
  string str = "";
  int n1 = sz(num1), n2 = sz(num2);
  int diff = n2 - n1;
  int carry = 0;
  for (int i = n1 - 1; i >= 0; i--)
  {
    int sum = ((num1[i] - '0') + (num2[i + diff] - '0') + carry);
    str.push_back(sum % 10 + '0');
    carry = sum / 10;
  }
  for (int i = n2 - n1 - 1; i >= 0; i--)
  {
    int sum = ((num2[i] - '0') + carry);
    str.pb(sum % 10 + '0');
    carry = sum / 10;
  }
  if (carry)
    str.pb(carry + '0');
  reverse(str.begin(), str.end());
  return str;
}
string power_string(string num, int n)
{
  string ans = "1";
  for (int i = 0; i < n; i++)
    ans = multiple_string(ans, num);
  return ans;
}
