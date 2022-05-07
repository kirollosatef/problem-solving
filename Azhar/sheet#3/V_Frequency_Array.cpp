#include <iostream>
using namespace std;
int main()
{
  long long n, m;
  cin >> n >> m;
  int frq[n] = {0};
  for (long long i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    frq[x - 1]++;
  }
  for (long long i = 0; i < m; i++)
    cout << frq[i] << endl;
}