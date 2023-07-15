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
  int n, m, ok = 1;
  cin >> n >> m;
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  for (int i = 0; i < 15; i++)
    if (arr[i] == n && arr[i + 1] != m)
      ok = 0;
  ok ? cout << "YES" : cout << "NO";
}