#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}
int main()
{
  int x,coun;
  cin >> x;
  int sort[x];
  for (int i = 0; i < x; cin >> sort[i], i++)
    ;
  for (int i = x - 1; i >= 0; i--)
  {
    for (int j = i - 1; j >= 0; j--)
      if (sort[i] < sort[j])
        swap(sort[i], sort[j]);
  }
  for (int i = 0; i < x; i++)
  {
    cout << sort[i] <<" ";
  }
    return 0;
}