#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
  vector<string> x;
  string y;
  for (int i = 0; i < 1;)
  {
    cin >> y;
    if (y != "\n" && y !=" ")
    {
      x.push_back(y);
    }
    else
    {
      i++;
    }
  }
  for (int i = 0; i < x.size(); i++)
  {
    cout << fixed << x[i] << " ";
  }
}