#include <iostream>
using namespace std;
int main()
{
  int s, n;
  cin >> s >> n;
  long long li[n] , bo[n];
  for (int i = 0; i < n; i++)
  {
    int arr[2];
    for (int j = 0; j < 2; cin >> arr[j], j++);
    li[i] = arr[0];
    bo[i] = arr[1];
  }
  for (int i = n - 1 ; i >= 0 ; i--)
  {
    for (int j = i - 1 ; j >= 0 ; j--)
    {
      if (li[i] < li[j])
      {
        swap(li[i],li[j]);
        swap(bo[i],bo[j]);
      }
    }
  }
  for (int i = 0; i < n ; i++)
  {
    if(s > li[i])
    {
      s+= bo[i];
    }
    else
    {
      cout << "NO";
      return 0 ;
    }
  }
  cout << "YES";
  return 0 ;
}
