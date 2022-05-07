#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
int main()
{
  o_a;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
    {
      s.erase(i, 3);
      i--;
      if (i + 1 != 0 && s[i] != ' ')
      {
        s.insert(i + 1, " ");
        i++;
      }
    }
  }
  cout << s << endl;
}
// int main()
// {
//   o_a;
//   string str, ans = "";
//   cin >> str;
//   int count = 0, siz = str.size();
//   for (int i = 0; i < sz(str); i++)
//   {
//     if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
//     {
//       count++;
//       i += 2;
//     }
//     else if (count > 0)
//     {
//       ans += " ";
//       ans += str[i];
//       count = 0;
//     }
//     else
//     {
//       ans += str[i];
//       count = 0;
//     }
//   }
//   (ans[0] == ' ') ? ans.erase(0, 1) : ans;
//   cout << ans;
//   return 0;
// }