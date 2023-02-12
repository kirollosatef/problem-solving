#include <iostream>
using namespace std;
int main()
{
  int n[3] , ans = 0;
  for (int i = 0; i < 3; cin >> n[i], i++);
  int arr_1[n[0]], arr_2[n[1]], arr_3[n[2]];
  for (int i = 0; i < n[0]; cin >> arr_1[i], i++);
  for (int i = 0; i < n[1]; cin >> arr_2[i], i++);
  for (int i = 0; i < n[2]; cin >> arr_3[i], i++);
  for (int i = 0; i < n[0]; i++)
    for (int j = 0; j < n[1]; j++)
      for (int k = 0; k < n[2]; k++)
        if (arr_1[i]<=arr_2[j] && arr_2[j] >= arr_3[k])
          ans ++ ;
  cout << ans ;
}