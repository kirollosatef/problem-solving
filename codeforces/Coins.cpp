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
int FIND(int arr[], int x)
{
  for (int i = 0; i < 3; i++)
    if (arr[i] == x)
      return i;
}
int main()
{
  o_a;
  int n = 3, arr[] = {0, 0, 0};
  while (n--)
  {
    char x, tm, y;
    cin >> x >> tm >> y;
    if (tm == '>')
      arr[x - 'A']++;
    else
      arr[y - 'A']++;
  }
  if (arr[FIND(arr, 0)] == 0 && arr[FIND(arr, 1)] == 1 && arr[FIND(arr, 2)] == 2)
    cout << char(FIND(arr, 0) + 'A') << char(FIND(arr, 1) + 'A') << char(FIND(arr, 2) + 'A');
  else
    cout << "Impossible";
}