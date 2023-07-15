#include <iostream>
using namespace std;
void Sw(int &x, int &y)
{
  int tmp = x;
  x = y;
  y = tmp;
}
void selection_sort(int arr[], int n)
{
  int min = 0, p = 0;
  for (int i = 0; i < n; i++)
  {
    min = arr[i];
    p = i;
    for (int j = i + 1; j < n; j++)
    {
      if (min >= arr[j])
      {
        min = arr[j];
        p = j;
      }
    }
    Sw(arr[i], arr[p]);
  }
}
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  selection_sort(arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}