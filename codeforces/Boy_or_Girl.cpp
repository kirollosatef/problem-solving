#include <iostream>
using namespace std;
int main()
{
  string x;
  int ans = 1;
  cin >> x;
  for (int i = 0; i < x.size() - 1; i++)
  {
    for (int j = i + 1; j < x.size(); j++)
      if (x[i] == x[j])
        ans--;
    ans++;
  }
  if (ans % 2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";
}
// int main()
// {
//   string x;
//   cin >> x ;
//   int ans = 0;
//   for (int i = 0; i < x.size() - 1; i++)
//     for (int j = i + 1; j < x.size(); j++)
//       if (x[i] == x[j])
//         x[j] = '0';
//   for (int i = 0; i < x.size(); i++)
//     if (x[i] >= 'a' && x[i] <= 'z')
//       ans++;
//   if (ans % 2 == 0)
//     cout << "CHAT WITH HER!";
//   else
//     cout << "IGNORE HIM!";
// }