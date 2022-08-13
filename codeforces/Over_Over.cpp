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
int find_index(string arr[], int n, string str)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == str)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  o_a;
  string str[] = {"", "yellow", "orange", "red", "purple", "violet", "blue", "blue-green", "green"};
  int t;
  cin >> t;
  while (t--)
  {
    string x, y;
    cin >> x >> y;
    int x_index = find_index(str, 9, x);
    int y_index = find_index(str, 9, y);
    int ans = min(abs(x_index - y_index), (8 - abs(y_index - x_index)));
    cout << ans << endl;
  }
}
