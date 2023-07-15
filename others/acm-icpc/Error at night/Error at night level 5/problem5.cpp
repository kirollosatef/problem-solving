#include <iostream>
using namespace std;
int main()
{
  int arr1[3][3], arr2[3][3], arr3[3][3];
  cout << "enter arr 1 \n";
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      cin >> arr1[i][j];
  cout << "enter arr 2 \n";
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      cin >> arr2[i][j];
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      arr3[i][j] = arr1[i][j] + arr2[i][j];
  cout << "the new arr (arr 3 ) \n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr3[i][j] << "\t";
    }
    cout << "\n";
  }
  cout << "the Determinant of that metrics [ |Arr3| ] = ";
  cout << (arr3[0][0] * ((arr3[1][1] * arr3[2][2]) - (arr3[1][2] * arr3[2][1]))) + (-arr3[0][1] * ((arr3[1][0] * arr3[2][2]) - (arr3[1][2] * arr3[2][0]))) + (arr3[0][2] * ((arr3[1][0] * arr3[2][1]) - (arr3[2][0] * arr3[1][1])))<<"\n";
  return 0 ; 
}