#include <bits/stdc++.h>
using namespace std;
#define pd push_back
#define sz(v) (v).size()
typedef long long ll;
void faster()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
int main()
{
  faster();
  ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  bool yes = true;
  int seg = 0, a = 0, b = 0, mn = -1;
  for (int i = 0; i < n - 1; i++)
  {
    if (seg == 0)
    {
      if (arr[i] > arr[i + 1])
      {
        seg = 1, a = i, b = i + 1;
        if (a > 0)
          mn = arr[a - 1];
      }
    }
    else if (seg == 1)
    {
      if (arr[i] > arr[i + 1])
        ++b, yes = yes && arr[i + 1] > mn;
      else
        seg = -1, yes = yes && arr[i + 1] > arr[a];
    }
    else if (seg == -1)
    {
      if (arr[i] > arr[i + 1])
      {
        yes = false;
        break;
      }
    }
  }
  if (yes)
    cout << "yes" << endl
         << a + 1 << " " << b + 1 << endl;
  else
    cout << "no" << endl;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define pd push_back
// #define sz(v) (v).size()
// typedef long long ll;
// void faster()
// {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
// }
// int main()
// {
//   faster();
//   ll n, x = 0, l, r, ind = 0;
//   cin >> n;
//   ll arr[n];
//   for (int i = 0; i < n; i++)
//     cin >> arr[i];
//   for (int i = 1; i <= n; i++)
//   {
//     if (arr[i - 1] != i)
//     {
//       x++;
//       l = i;
//       (x - 1 == 0) ? l = arr[i - 1] : r = arr[i - 1];
//       if (x > 2)
//       {
//         cout << "no";
//         return 0;
//       }
//     }
//   }
//   cout << "yes\n"
//        << l << " " << r;
// }