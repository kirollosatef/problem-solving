/*10)
**Design a program that takes a 2D Array, the program should ask
**the user about N which stands for the number of rows and M
**which stands for the number of columns in the 2D Array. You
**should calculate the average of the rows of the array. After you
**calculate the average of the row, subtract each element from
**the averages of its row and then store it in another array and
**display it on the console.
*/
#include <iostream>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  int arr[n][m], av[n], sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
      sum += arr[i][j];
    }
    av[i] = sum / m;
    sum = 0 ;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      arr[i][j] = arr[i][j] - av[i];
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}