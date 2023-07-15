#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a, b, c, counter = 0;
  int arr1[500], arr2[500], arr3[500];
  for (int i = 0; i < a; i++)
  {
    cin >> arr1[i];
  }
  for (int i = 0; i < b; i++)
  {
    cin >> arr2[i];
  }
  for (int i = 0; i < c; i++)
  {
    cin >> arr3[i];
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)
    {
      for (int t = 0; t < c; t++)
      {
        if (arr1[i] <= arr2[j] && arr2[j] >= arr2[t])
        {
          counter++;
        }
      }
    }
  }
  cout << counter;
}