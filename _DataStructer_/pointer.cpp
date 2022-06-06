#include <bits/stdc++.h>
#define pb push_back
#define v(x) vector<x>
#define sz(v) (int)(v).size()
#define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;
// Pointer
int main()
{
  string food = "Pizza";
  // A food variable of type string
  string *ptr = &food;
  // A pointer variable, with the name ptr, that stores the address of food

  cout << food << "\n";
  // Output the value of food (Pizza)
  cout << *ptr << "\n";
  // Output the value of the variable pointed to by ptr (Pizza)

  cout << &food << "\n";
  // Output the memory address of food (0x6dfed4)
  cout << ptr << "\n";
  // Output the memory address of food with the pointer (0x6dfed4)

  cout << &ptr << "\n";
  // Output the memory address of ptr (0x6dfed8)
}