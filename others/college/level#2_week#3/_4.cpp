#include <iostream>
#include <vector>
using namespace std;
void SS(int &x, int &y)
{
  int t = x;
  x = y;
  y = t;
}
void bubble_sort(vector<int> &array)
{
  for (int i = array.size() - 1; i >= 0; i--)
  {
    for (int j = i - 1; j >= 0; j--)
      if (array[i] > array[j])
        SS(array[i], array[j]);
  }
}
int main()
{
  int n, k, ans = 0;
  cout << "Enter numper of dayes & transactions\n";
  cin >> n >> k;
  int arr[n];
  vector<int> tc;
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  for (int j = 0; j < n - 1; j++)
  {
    if (arr[j] < arr[j + 1])
    {
      tc.push_back((arr[j + 1] - arr[j]));
      j++;
    }
  }
  bubble_sort(tc);
  for (int i = 0; i < tc.size(); i++)
  {
    ans += tc[i];
    k--;
    if (k == 0)
      i = tc.size();
  }
  cout << ans << endl;
}