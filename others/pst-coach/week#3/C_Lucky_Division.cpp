#include <iostream>
using namespace std;
int main()
{
  int m, ok = 1;
  cin >> m;
  int x = m;
  while (x > 0)
  {
    if (x % 10 != 4 || x % 10 != 7)
    {
      ok = 0;
    }
    x -= x % 10;
    x /= 10;
  }
  if (ok)
    cout << "YES";
  else
  {
    
  }
}
// #include <iostream>
// using namespace std;
// int main()
// {
//   int x, d[] = {4, 7, 44, 77, 444, 777, 47, 74, 474, 477, 744, 774, 447, 747};
//   cin >> x;
//   for (int i = 0; i < 14; i++)
//   {
//     if (x % d[i] == 0)
//     {
//       cout << "YES";
//       return 0;
//     }
//   }
//   cout << "NO";
// }