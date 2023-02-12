#include <iostream>
using namespace std;
int main()
{
  int A = 0, a = 0, N = 0;
  string x;
  cin >> x;
  if (x.size() < 6)
  {
    cout << "password weak, you must add " << 6 - x.size() << " characters\n";
    return 0;
  }
  if (x.size() > 20)
  {
    cout << "password weak, you must remove " << x.size() - 20 << " characters\n";
    return 0;
  }
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] >= 'A' && x[i] <= 'Z')
      A++;
    else if (x[i] >= 'a' && x[i] <= 'z')
      a++;
    else if (x[i] >= '0' && x[i] <= '9')
      N++;
  }
  if (A < 1)
  {
    cout << "password weak, You must add at least an uppercase letter\n";
    return 0;
  }
  else if (a < 1)
  {
    cout << "password weak, You must add at least an lowercase letter\n";
    return 0;
  }
  else if (N < 1)
  {
    cout << "password weak, You must add at least a number\n";
    return 0;
  }
  for (int i = 0; i < x.size() - 1; i++)
  {
    int ch = 1;
    char xx = x[i];
    for (int j = i + 1; j < x.size(); j++)
    {
      if (xx == x[j])
      {
        ch++;
        if (ch >= 3)
        {
          cout << "password weak, You must not repeat the letter more than three times\n";
          return 0;
        }
      }
      else
        ch = 0;
    }
  }
  cout << "password strong\n";
}