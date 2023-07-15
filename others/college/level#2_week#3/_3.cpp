#include <iostream>
#include <vector>
using namespace std;
bool P(int n, int sum) //Pruning=>
{
  bool P = false;
  for (int i = 1; i < n; i++)
    if (sum * i % n == 0)
      P = true;
  return P;
}
int sumarr(int arr[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  return sum;
}
void Sw(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}
void RT(int array[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = i - 1; j >= 0; j--)
      if (array[i] < array[j])
        Sw(array[i], array[j]);
  }
}
int main()
{
  cout << "enter numper of array\n";
  int n, sum;
  bool p;
  vector<int> av1, av2;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; cin >> arr[i], i++)
    ;
  sum = sumarr(arr, n);
  p = P(n, sum);
  if (p == false || n < 4)
  {
    cout << "false\n";
    return 0;
  }
  RT(arr, n);
  int sum1 = 0, sum2 = 0;
  for (int i = 0; i < n / 2; i++)
  {
    if ((i + 1) % 2 != 0)
    {
      sum1 += arr[i] + arr[n - 1 - i];
      av1.push_back(arr[i]);
      av1.push_back(arr[n - 1 - i]);
    }
    else
    {
      sum2 += arr[i] + arr[n - 1 - i];
      av2.push_back(arr[i]);
      av2.push_back(arr[n - 1 - i]);
    }
  }
  int sumav1=0;
  cout << "( ";
  for (int i = 0 ; i < av1.size() ;i++)
  {
    cout << av1[i] << " , ";
    sumav1 += av1[i];
  }
  cout << " )\t" << "average = " << (double)sumav1 / av1.size() << endl;
  int sumav2=0;
  cout << "( ";
  for (int i = 0 ; i < av2.size() ;i++)
  {
    cout << av2[i] << " , ";
    sumav2 += av2[i];
  }
  cout << " )\t" << "average = " << (double)(sumav2 / av2.size()) << endl;
}