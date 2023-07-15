#include <bits/stdc++.h>
using namespace std;
void SW(int &x, int &y)
{
  int tmp = x;
  x = y;
  y = tmp;
}
void sorting(vector<int> &x)
{
  for (int i = 0; i < x.size(); i++)
    for (int j = i + 1; j < x.size(); j++)
      if (x[j] < x[i])
        SW(x[j], x[i]);
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string str;
  cin >> str;
  vector<int> nums;
  for (int i = 0; i < str.size(); i += 2)
    nums.push_back(str[i] - '0');
  sorting(nums);
  for (int i = 0; i < nums.size() - 1; i++)
    cout << nums[i] << "+";
  cout << nums[nums.size() - 1];
}