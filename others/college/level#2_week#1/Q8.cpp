#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
  int hour = 0, min = 0, sec = 0;
  string y;
  cin >> y;
  while (y == "start")
  {
    sleep(1);
    sec++;
    if (sec > 59)
    {
      min++;
      sec = 0;
    }
    if (min > 59)
    {
      hour++;
      sec = 0;
      min = 0;
    }
    if (cin.get() == "end")
    {
      y = "end"
    }
  }
  cout << "hour:" << hour << "\nmin:" << min << "\nsec:" << sec;
}