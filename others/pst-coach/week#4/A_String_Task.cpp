// #include <iostream>
// using namespace std;
// void sml(string &x)
// {
//   for (int i = 0; i < x.size(); i++)
//     if (x[i] >= 'A' && x[i] <= 'Z')
//       x[i] += 32;
// }
// int main()
// {
//   string str, ans = "";
//   cin >> str;
//   sml(str);
//   for (int i = 0; i < str.size(); i++)
//     (str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'u' || str[i] == 'e' || str[i] == 'i') ? ans : (ans += ".", ans += str[i]);
//   cout << ans << endl;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  cin >> a;
  for (int i = 0; i < a.size(); i++)
    if (!strchr("AEIOUYaeiouy", a[i]))
      cout << "." << (char)tolower(a[i]);
}