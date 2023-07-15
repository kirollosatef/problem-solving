#include <iostream>
using namespace std;
int main()
{
  int loop, ans = 0;
  cin >> loop;
  for (int i = 0; i < loop; i++)
  {
    int array[3], sum = 0;
    for (int ar = 0; ar < 3; cin >> array[ar], ar++);
    sum = array[0] + array[1] + array[2];
    if (sum >= 2)
      ans++;
  }
  cout << ans;
}