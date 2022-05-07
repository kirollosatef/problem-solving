#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define all(str) str.begin(), str.end()
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
  vi arr(10);
  arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < sz(arr); i++)
    if (arr[i] % 2 == 0)
      arr.erase(arr.begin() + i);
  for (int i = 0; i < 5; i++)
    cout << arr[i] << " ";
}