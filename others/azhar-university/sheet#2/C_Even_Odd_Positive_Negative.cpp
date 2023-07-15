#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int E = 0, O = 0, N = 0, P = 0;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    (arr[i] % 2 == 0) ? E++ : O++;
    (arr[i] > 0) ? P++ : (arr[i] < 0) ? N++ : NULL;
  }
  cout << "Even: " << E << endl;
  cout << "Odd: " << O << endl;
  cout << "Positive: " << P << endl;
  cout << "Negative: " << N << endl;
}