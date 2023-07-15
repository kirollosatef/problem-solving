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
  int n;
  cin >> n;
  int D = 1;
  for (int i = 0; i < n / 2; i++)
  {
    for (int j = 0; j < (n / 2) - i; j++)
      cout << "*";
    for (int j = 0; j < D; j++)
    {
      cout << "D";
    }
    for (int j = 0; j < (n / 2) - i; j++)
      cout << "*";
    D += 2;
    cout << "\n";
  }
  for (int i = 0; i < n; i++)
    cout << "D";
  cout << "\n";
  D -= 2;
  for (int i = n / 2 - 1; i >= 0; i--)
  {
    for (int j = 0; j < (n / 2) - i; j++)
      cout << "*";
    for (int j = 0; j < D; j++)
    {
      cout << "D";
    }
    for (int j = 0; j < (n / 2) - i; j++)
      cout << "*";
    D -= 2;
    cout << "\n";
  }
}