#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string ans = "SAD:(";
  map<string, vector<string>> mp;
  while (n--)
  {
    string x, y;
    cin >> x >> y;
    mp[x].push_back(y);
  }
  for (auto it : mp)
  {
  }
  for (auto i : mp)
  {
    if (i.second.size() >= 5)
    {
      for (int j = 0; j < i.second.size() - 4; ++j)
      {
        set<string> s;
        s.insert(i.second[j]);
        s.insert(i.second[j + 1]);
        s.insert(i.second[j + 2]);
        s.insert(i.second[j + 3]);
        s.insert(i.second[j + 4]);
        if (s.size() >= 5)
        {
          cout << "PENTA KILL!";
          return 0;
        }
      }
    }
  }
  cout << "SAD:(";
}
// int main()
// {
//   int n;
//   cin >> n;
//   string ans = "SAD:(";
//   int counter = 0;
//   string now = "";
//   vector<string> kills;
//   for (int i = 0; i < n; i++)
//   {
//     string x, y;
//     cin >> x >> y;
//     if (x != now)
//     {
//       kills.clear();
//       now = x;
//       counter = 1;
//       kills.push_back(y);
//     }
//     else if (x == now && !count(kills.begin(), kills.end(), y))
//     {
//       counter++;
//       kills.push_back(y);
//       if (counter == 5)
//       {
//         ans == "PENTA KILL!";
//         break;
//       }
//     }
//   }
//   cout << ans << endl;
// }
