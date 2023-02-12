#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<int> chars;
  int N;
  string line;
  cin >> N >> line;
  for (int i = 0; i < N; i++)
    chars.insert(tolower(line[i]));
  cout << (chars.size() == 26 ? "YES" : "NO");
}
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   string str = "00000000000000000000000000";
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     char s;
//     cin >> s;
//     int x;
//     if (s >= 'a' && s <= 'z')
//       str[(s - 'a')] = '1';
//     else if (s >= 'A' && s <= 'Z')
//       str[(s - 'A')] = '1';
//   }
//   (str == "11111111111111111111111111") ? cout << "YES" : cout << "NO";
// }