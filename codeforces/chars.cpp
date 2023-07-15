#include <iostream>
#include <string>
void smol(char &);
using namespace std;
int main()
{
  string x, y;
  cin >> x;
  char arx[x.size()];
  for (int i = 0; i <= (x.size() - 1); i++)
  {
    smol(x[i]);
    arx[i] = x[i];
  }
  for (int i = 0; i <= (x.size() - 1); i++)
  {
    if (arx[i] == 'A' || arx[i] == 'O' || arx[i] == 'Y' || arx[i] == 'U' || arx[i] == 'E' || arx[i] == 'I' || arx[i] == 'a' || arx[i] == 'o' || arx[i] == 'y' || arx[i] == 'u' || arx[i] == 'e' || arx[i] == 'i')
    {
    }
    else
      cout << "." << arx[i];
  }
  cout << "\n";
  return 0;
}
void smol(char &i)
{
  if (i >= 'A' && i <= 'Z')
    i = i + 32;
}