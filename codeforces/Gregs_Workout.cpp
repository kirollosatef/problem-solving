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
  int chest = 0, biceps = 0, back = 0;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    (i % 3 == 1) ? chest += x : ((i % 3 == 2) ? biceps += x : back += x);
  }
  (chest > back && chest > biceps)
      ? cout << "chest"
      : ((biceps > back && biceps > chest)
             ? cout << "biceps"
             : cout << "back");
}