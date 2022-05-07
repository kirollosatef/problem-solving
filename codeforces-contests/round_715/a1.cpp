#include <iostream>
using namespace std;
int main()
{
  int v, A, D;
  cin >> v;
  char win[v];
  for (int i = 0; i < v; cin >> win[i], i++)
    ;
  for (int i = 0; i < v; i++)
  {
    if (win[i] == 'A')
      A++;
    else if (win[i] == 'D')
      D++;
  }
  if (A > D)
    cout << "Anton";
  else if (A < D)
    cout << "Danik";
  else
    cout << "Friendship";
}