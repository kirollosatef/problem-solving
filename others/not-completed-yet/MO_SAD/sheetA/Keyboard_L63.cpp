// #include <iostream>
// using namespace std;
// string l = "qwertyuiopasdfghjkl;zxcvbnm,./";
// int indx(char x)
// {
//   for (int i = 0; i < 30; i++)
//   {
//     if (x == l[i])
//       return i;
//   }
// }
// int main()
// {
//   char direc;
//   cin >> direc;
//   string s;
//   cin >> s;
//   for (int i = 0; i < s.size(); i++)
//   {
//     if (direc == 'R')
//       cout << l[indx(s[i]) - 1];
//     else
//       cout << l[indx(s[i]) + 1];
//   }
// }
#include <iostream>
using namespace std;
int main(){
  string str = "qwertyuiopasdfghjkl;zxcvbnm,./", x, y; cin >> x >> y;
  for (int i = 0; i < y.size(); i++) cout << str[str.find(y[i]) - (x == "R") + (x == "L")];}