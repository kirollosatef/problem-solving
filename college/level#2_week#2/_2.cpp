#include <iostream>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  double ab[n],a[n], b[n],W;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
    ab[i] = a[i] / b[i];
  }
  W = ab[0];
  for (int i = 1; i < n; i++)
    if (ab[i] < W)
      W = ab[i];
  cout << m * W;
}