#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
int main()
{
  int x, ans_1 = 0, ans_2 = 0;
  cin >> x;
  int arr[x];
  for (int i = 0; i < x; cin >> arr[i], i++);
  for (int i = x - 1; i >= 0; i--)
  {
    for (int j = i - 1; j >= 0; j--)
      if (arr[i] > arr[j])
        swap(arr[i], arr[j]);
  }
  for (int i = 0; i < x; ans_1 += arr[i], i += 2);
  for (int i = 1; i < x; ans_2 += arr[i], i += 2);
  cout << ans_1 << " " << ans_2;
  return 0;
}