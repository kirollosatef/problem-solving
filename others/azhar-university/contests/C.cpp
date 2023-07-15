#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string x;
  cin >> x;
  if (x < "20" && x.size() == 2)
    cout << x << ":\nI will help you.";
  else
    cout << x << ":\nThink again!";
}