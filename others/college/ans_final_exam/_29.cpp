#include <iostream>
using namespace std;
int main()
{
  string x;
  cin >> x;
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] != '0')
      cout << x[i] << " : ";
    int sum = 1;
    for (int j = i + 1; j < x.size(); j++)
    {
      if (x[i] == x[j])
      {
        sum++;
        x[j] = '0';
      }
    }
    if (x[i] != '0')
      cout << sum << endl;
  }
}