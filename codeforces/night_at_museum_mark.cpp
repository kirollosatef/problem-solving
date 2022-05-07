#include <iostream>
#include <string>
using namespace std;
void change(char &a, char &b)
{
  char temp = a;
  a = b;
  b = temp;
}
int main()
{
  int counter = 0, i, pas = 0, e = 24, o = 1;
  char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  string n;
  cin >> n;
  //checking every character
  for (i = 0; i < n.size(); i++)
  {
    // see if its before or after the half so we can see if we should move it to the left or the right
    for (int q = 0; q < 26; q++)
    {
      if (arr[q] == n[i])
      {
        break;
      }
      else
      {
        pas++;
      }
    }
    //the real working
    if (pas <= 13)
    {
      for (int y = 0; y < 14;)
      {
        if (n[i] == arr[0])
        {
          break;
        }
        else
        {
          //moving the array 1 time to the left
          for (int d = 25; d >= 0; d--)
          {
            change(arr[e], arr[25]);
            e--;
          }
          counter++;
        }
      }
    }
    else
    {
      for (int y = 0; y < 14;)
      {
        if (n[i] == arr[0])
        {
          break;
        }
        else
        {
          //moving the array 1 time to the right
          for (int d = 25; d >= 0; d--)
          {
            change(arr[o], arr[0]);
            o++;
          }
          counter++;
        }
      }
    }
    pas = 0;
  }
  cout << counter;
}