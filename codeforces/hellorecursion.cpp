#include <iostream>
using namespace std;
int n;
int hello(int i)
{
  if (i == n)
    return 0;
  int x;
  cin >> x;
  return x + hello(i + 1);
}
int main()
{
  int t, test = 1;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cout << "Case " << test++ << ": " << hello(0) << endl;
  }
}