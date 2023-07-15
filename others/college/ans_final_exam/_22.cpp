#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int ce_1[3], ce_2[3], r;
  float de;
  for (int i = 0; i < 3; cin >> ce_1[i], i++)
    ;
  for (int i = 0; i < 3; cin >> ce_2[i], i++)
    ;
  r = ce_1[0] + ce_2[0];
  de = sqrt(pow((ce_1[1]-ce_2[1]),2)+pow((ce_1[2]-ce_2[2]),2));
  if (r >= de)
    cout <<"True";
  else
    cout << "False";
}