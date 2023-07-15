#include <iostream>
using namespace std;
int swapping(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}
int main()
{
  int num , a7e;
  cin >> num;
  // if (num == 1)
  // {
  //   cout <<"enter the number \n";
  //   cin >> a7e ;
  //   cout << "you enter only one number = "<<a7e<<"\n";
  //   sort[0] =0;
  //   return 0;
  // }
  // num -- ;
  int sort[num], onee;
  for (int i = 0; i < num; i++)
  {
    cin >> sort[i];
  }
  cout<<"\n";
  for (int i = 0; i < num; i++)
  {
    cout << sort[i] << " ";
  }
  for (int i = 0; i < num-1; i++)
  {
    for (int j = i + 1; j < num ; j++)
    {
      if (sort[j] < sort[onee])
      {
        onee = j;
      }
    }
    swapping(sort[i], sort[onee]);
  }
  cout << "\n";
  for (int i = 0; i < num; i++)
  {
    cout << sort[i] << " ";
  }
}