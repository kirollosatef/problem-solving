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
  int x;
  cin >> x;
  int start = clock();
  //<...>
  // Do your stuff here
  cout << to_string(x).size() << endl;
  //<...>
  int end = clock(); // Now check what amount of ticks we have now.
  // To get the time, just subtract start from end, and divide by CLOCKS_PER_SEC.
  cout << "it took " << end - start << " ticks, or " << ((float)end - start) / CLOCKS_PER_SEC << " seconds." << endl;
}