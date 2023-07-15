// #include <bits/stdc++.h>
// using namespace std;
// vector<int> binary(int &y)
// {
//   vector<int> dig;
//   int i = 0;
//   while (y != 0)
//   {
//     dig.push_back(y % 2);
//     y = y / 2;
//     i++;
//   }
//   return dig;
// }
// int main()
// {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   vector<int> bin, sum;
//   int x, su = 0, max;
//   cin >> x;
//   bin = binary(x);
//   for (int i = bin.size() - 1; i >= 0; i--)
//   {
//     if (bin[i] == 1)
//       su++;
//     if (bin[i] == 0 || i == 0)
//     {
//       sum.push_back(su);
//       su = 0;
//     }
//   }
//   max = sum[0];
//   for (int i = 0; i < sum.size(); i++)
//     if (sum[i] > max)
//       max = sum[i];
//   cout << max ;
// }
/**
**By:kero_Atef
**Date:2021/06/02-18:50
**/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x;
  cin >> x;
  int rme = 0, s = 0, m = 0;
  while (x > 0)
  {
    rme = x % 2;
    if (rme == 1)
    {
      s++;
      if (s > m)
        m = s;
    }
    else
      s = 0;
    x = x / 2;
  }
  cout << m;
}