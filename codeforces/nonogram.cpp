#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
  string x;
  vector<int> k;
  for (int i = 0; i < 1;)
  {
    getline(cin, x);
    stringstream ss;
    int ex ;
    ss << x ;
    ss >> ex ;
    k.push_back(ex);
    if (x == "")
      i++;
  }
  for (int i = 0; i < k.size(); i++)
    cout << k[i] << " ";
  return 0;
}