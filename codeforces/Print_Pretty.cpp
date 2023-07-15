#include <bits/stdc++.h>
using namespace std;
void hexadecimal()
{
  int a;
  cin >> a;
  string str;
  char x;
  vector<char> arr;
  while (a != 0)
  {
    if (a % 16 < 10)
    {
      x = ((a % 16) + '0');
      arr.push_back(x);
      a /= 16;
    }
    else if (a % 16 == 10)
    {
      x = 'a';
      arr.push_back(x);
      a /= 16;
    }
    else if (a % 16 == 11)
    {
      x = 'b';
      arr.push_back(x);
      a /= 16;
    }
    else if (a % 16 == 12)
    {
      x = 'c';
      arr.push_back(x);
      a /= 16;
    }
    else if (a % 16 == 13)
    {
      x = 'd';
      arr.push_back(x);
      a /= 16;
    }
    else if (a % 16 == 14)
    {
      x = 'e';
      arr.push_back(x);
      a /= 16;
    }
    else if (a % 16 == 15)
    {
      x = 'f';
      arr.push_back(x);
      a /= 16;
    }
  }
  arr.push_back('x');
  arr.push_back('0');
  for (int i = 0; i < arr.size(); i++)
    str[i] = arr[arr.size() - 1 - i];
  for (int i = 0; i < arr.size(); i++)
    cout << str[i];
  cout << endl;
}
int digits(long long &x)
{
  int count = 0;
  while (x != 0)
  {
    count++;
    x = ((x - (x % 10)) / 10);
  }
  return count;
}
void scale_of_two()
{
  double b;
  cin >> b;
  long long x = b * 1000;
  if (x % 10 < 5)
    x = ((x - (x % 10)) / 10);
  else
    x = ((x - (x % 10)) / 10) + 1;
  b = x;
  x = digits(x) + 1;
  for (int i = 0; i < x; i++)
    cout << '_';
  cout << '+' << b / 100 << endl;
}
void nine_decimal_places()
{
  cout << fixed;
  long double d;
  cin >> d;
  long long x = d, n;
  cout << x << " ";
  n = digits(x);
  cout << n << " ";
  d = d * pow(10, (9 - (n - 2)));
  cout << d << " ";
  x = d;
  cout << x << " ";
  if (x % 10 < 5)
    x = ((x - (x % 10)) / 10);
  else
    x = ((x - (x % 10)) / 10) + 1;
  d = x;
  cout << x << " " << d << endl;
  d = d / pow(10, 9);
  cout << fixed << setprecision(9) << d << "E+" << n - 1;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); 
  int t;
  cin >> t;
  while (t--)
  {
    hexadecimal();
    scale_of_two();
    nine_decimal_places();
  }
}