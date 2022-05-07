/**
**By:kero_Atef
**Date:2021/05/31-02:21
**/
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
  string str;
  char ch;
  int x;
  getline(cin, str);
  stringstream ss;
  stringstream ss;
  stringstream ss;
  ss << str;
  vector<int> nums;
  while (ss >> x)
  {
    nums.push_back(x);
    ss >> ch;
  }
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << "\n";
  }
  return 0;
}