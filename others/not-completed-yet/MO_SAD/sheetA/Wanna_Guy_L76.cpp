#include <iostream>
using namespace std;
int main()
{
  int n, x, y;
  cin >> n;
  int arr[n] = {0};
  cin >> x;
  while (x--)
  {
    int p;
    cin >> p;
    arr[p - 1]++;
  }
  cin >> y;
  while (y--)
  {
    int q;
    cin >> q;
    arr[q - 1]++;
  }
  for (int i = 0; i < n; i++)
    if (arr[i] == 0)
    {
      cout << "Oh, my keyboard!";
      return 0;
    }
  cout << "I become the guy.";
}