#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int arr[5];
  float sum = 0, av, past, sumpast, s;
  cout << "enter 5 numper \n";
  for (int i = 0; i < 5; i++)
    cin >> arr[i];
  for (int i = 0; i < 5; i++)
  {
    sum += arr[i];
  }
  av = sum / 5;
  for (int i = 0; i < 5; i++)
  {
    past = pow((arr[i] - av), 2);
    sumpast += past;
  }
  s = pow((sumpast / 4), 0.5);
  cout << "standard deviation = " << s << "\n";
  return 0;
}