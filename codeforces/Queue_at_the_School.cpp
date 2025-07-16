// #include <bits/stdc++.h>
// #define pb push_back
// #define v(x) vector<x>
// #define sz(v) (int)(v).size()
// #define all(str) str.begin(), str.end()
// #define o_a                     \
//   ios_base::sync_with_stdio(0); \
//   cin.tie(0);
// using namespace std;
// typedef long long ll;
// int main()
// {
//   o_a;
//   int n, t;
//   string q;
//   cin >> n >> t >> q;
//   for (int i = 0; i < t; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       if (q[j] == 'B' && q[j + 1] == 'G')
//       {
//         swap(q[j], q[j + 1]);
//         j++;
//       }
//     }
//   }
//   cout << q;
// }

// Optimized Version

#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;

int main()
{
  o_a;
  int n, t;
  string q;
  cin >> n >> t >> q;

  for (int i = 0; i < t; i++)
  {
    bool swapped = false;
    for (int j = 0; j < n - 1; j++) // Changed n to n-1 to avoid out of bounds
    {
      if (q[j] == 'B' && q[j + 1] == 'G')
      {
        swap(q[j], q[j + 1]);
        swapped = true;
        j++; // Skip next position since we just swapped
      }
    }
    if (!swapped)
      break; // Early termination if no swaps occurred
  }

  cout << q;
  return 0;
}