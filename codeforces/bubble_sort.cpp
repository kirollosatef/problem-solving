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
  int number_of_array;
  cout << "Enter number of array\n";
  cin >> number_of_array;
  int array[number_of_array];
  cout << "Enter content of array\n";
  for (int i = 0; i < number_of_array; i++)
    cin >> array[i];
  for (int i = number_of_array - 1; i >= 0; i--)
  {
    for (int j = i - 1; j >= 0; j--)
      if (array[i] < array[j])
        swap(array[i], array[j]);
  }
  for (int i = 0; i < number_of_array; i++)
    cout << array[i];
  return 0;
}