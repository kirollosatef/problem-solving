#include <iostream>
using namespace std;
// bool XO(int arr[4])
// {
//   int no0, no1, no2, no3;
//   no0 = arr[1] + arr[2] + arr[3];
//   no1 = arr[0] + arr[2] + arr[3];
//   no2 = arr[1] + arr[0] + arr[3];
//   no3 = arr[1] + arr[2] + arr[0];
//   if (no0 == 15 || no0 == 6 || no0 == 24 || no0 == 12 || no0 == 18)
//     return true;
//   else if (no1 == 15 || no1 == 6 || no1 == 24 || no1 == 12 || no1 == 18)
//     return true;
//   else if (no2 == 15 || no2 == 6 || no2 == 24 || no2 == 12 || no2 == 18)
//     return true;
//   else if (no3 == 15 || no3 == 6 || no3 == 24 || no3 == 12 || no3 == 18)
//     return true;
//   else
//     return false;
// }
int main()
{
  string str = "| 0 0 | 0 1 | 0 2 |\n|-----------------|\n| 1 0 | 1 1 | 1 2 |\n|-----------------|\n| 2 0 | 2 1 | 2 2 |\n";
  cout << str;
  // cout << "| 0 0 | 0 1 | 0 2 |\n";
  // cout << "|-----------------|\n";
  // cout << "| 1 0 | 1 1 | 1 2 |\n";
  // cout << "|-----------------|\n";
  // cout << "| 2 0 | 2 1 | 2 2 |\n";
  bool p1[3][3] = {0}, p2[3][3] = {0};
  int i = 0;
  bool ok1 = 0, ok2 = 0;
  while (i < 8)
  {
    int x1, x2, y1, y2;
    cout << "player 1 : ";
    cin >> x1 >> x2;
    p1[x1][x2] = 1;
    if (p1[0][0] && p1[0][1] && p1[0][2])
    {
      ok1 = 1;
      break;
    }
    else if (p1[1][0] && p1[1][1] && p1[1][2])
    {
      ok1 = 1;
      break;
    }
    else if (p1[2][0] && p1[2][1] && p1[2][2])
    {
      ok1 = 1;
      break;
    }
    else if (p1[0][0] && p1[1][0] && p1[2][0])
    {
      ok1 = 1;
      break;
    }
    else if (p1[0][1] && p1[1][1] && p1[2][1])
    {
      ok1 = 1;
      break;
    }
    else if (p1[0][2] && p1[1][2] && p1[2][2])
    {
      ok1 = 1;
      break;
    }
    else if (p1[0][0] && p1[1][1] && p1[2][2])
    {
      ok1 = 1;
      break;
    }
    else if (p1[0][2] && p1[1][1] && p1[2][0])
    {
      ok1 = 1;
      break;
    }
    cout << "player 2 : ";
    cin >> y1 >> y2;
    p2[y1][y2] = 1;
    if (p2[0][0] && p2[0][1] && p2[0][2])
    {
      ok2 = 1;
      break;
    }
    else if (p2[1][0] && p2[1][1] && p2[1][2])
    {
      ok2 = 1;
      break;
    }
    else if (p2[2][0] && p2[2][1] && p2[2][2])
    {
      ok2 = 1;
      break;
    }
    else if (p2[0][0] && p2[1][0] && p2[2][0])
    {
      ok2 = 1;
      break;
    }
    else if (p2[0][1] && p2[1][1] && p2[2][1])
    {
      ok2 = 1;
      break;
    }
    else if (p2[0][2] && p2[1][2] && p2[2][2])
    {
      ok2 = 1;
      break;
    }
    else if (p2[0][0] && p2[1][1] && p2[2][2])
    {
      ok2 = 1;
      break;
    }
    else if (p2[0][2] && p2[1][1] && p2[2][0])
    {
      ok2 = 1;
      break;
    }
    i += 2;
  }
  if (ok1)
    cout << "player 1 win\n";
  else if (ok2)
    cout << "player 2 win\n";
  else
    cout << "no one win\n";
  return 0;
}