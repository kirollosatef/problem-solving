#include <iostream>
using namespace std;
int nsw(int arr[], int n);
int main()
{
  int t;
  cin >> t;
  for (int tt = 0; tt < t; tt++)
  {
    int n, def = 0 , sw;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] != i - 1 && arr [i] != i && arr[i] != i + 1)
        def++;
    }
    sw = nsw(arr,n);
    cout << def << " " << sw;
    // if (sw <= def*2)
    //   cout << def;
    // else
    //   cout << "Too chaotic";
  }
}
int nsw(int arr[], int n)
{
  int count = 0;
  for (int i = n - 1; i >= 0; i--)
    for (int j = i - 1; j >= 0; j--)
      if (arr[i] < arr[j])
        count++;
  return count;
}