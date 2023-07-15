#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void reverse_vector(vector<int> &arr)//✔
{
  for (int i = 0; i < arr.size() / 2; i++)
    swap(arr[i], arr[arr.size() - 1 - i]);
}
void big_int(vector<int> &arr, string &str)//✔
{
  for (int i = 0; i < str.size(); i++)
    arr.pb(str[i] - '0');
}
void big_int_by_num(vector<int> &num, int &x, vector<int> &arr) //✔
{
  for (int i = 0; i < num.size(); i++)
    arr.pb(num[i]);
  reverse_vector(arr);
  int temp = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    arr[i] *= x;
    arr[i] += temp;
    temp = 0;
    if (arr[i] / 10 >= 1)
    {
      temp = (arr[i] / 10);
      arr[i] %= 10;
    }
  }
  if (temp > 0)
    arr.pb(temp);
  reverse_vector(arr);
}
void big_int_by_big_int(vector<int> &num1, vector<int> &num2, vector<int> &malti)
{
  vector<int> arr;
  reverse_vector(num1);
  big_int_by_num(num2, num1[0], arr);
  reverse_vector(arr);
  for (int i = 0; i < arr.size(); i++)
    malti.pb(arr[i]);
  arr.clear();
  for (int i = 1; i < num1.size(); i++)
  {
    big_int_by_num(num2, num1[i], arr);
    reverse_vector(arr);
    int temp = 0;
    for (int j = 0; j < arr.size(); j++)//! not work here
    {
      if (i + j > malti.size() - 1) //! not work here
      {
        malti.pb(arr[j]);
      }
      else //! not work here
      {
        malti[j + i] += arr[j];
        malti[j + i] += temp;
        if (malti[j + i] / 10 >= 1)
        {
          temp = (arr[i] / 10);
          arr[i] %= 10;
        }
      }
      if (temp > 0)
        arr.pb(temp);
    }
  }
  reverse_vector(malti);
}
int main()
{
  int t = 1;
  while (t--)
  {
    vector<int> num1, num2, multiple;
    string n1, n2;
    cin >> n1 >> n2;
    big_int(num1, n1);
    big_int(num2, n2);
    big_int_by_big_int(num1, num2, multiple);
    for (int i = 0; i < multiple.size(); i++)
      cout << multiple[i];
  }
}