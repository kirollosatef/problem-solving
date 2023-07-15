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
  string str;
  cin >> str;
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] -= 32;
  cout << str << endl;
}