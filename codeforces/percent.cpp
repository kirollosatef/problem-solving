  #include <iostream>
  using namespace std;
  int main()
  {
    string x;
    long long a = 0;
    char y;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
      y = x[i];
      for (int j = i + 1; j < x.size(); j++)
      {
        if (y == x[j])
        {
          a--;
          j = x.size();
        }
      }
      a++;
    }
    cout << a << "\n";
    // a = a + x.size()*2 ;
    if (a % 2 == 0)
      cout << "CHAT WITH HER!";
    else
      cout << "IGNORE HIM!";
    return 0;
  }