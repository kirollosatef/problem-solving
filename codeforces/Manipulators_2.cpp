// Manipulators with Arguments : Some of the manipulators are used with the argument like setw(20), setfill(‘*’), and many more.These all are defined in the header file.If we want to use these manipulators then we must include this header file in our program.For Example, you can use following manipulators to set minimum width and fill the empty space with any character you want : std::cout << std::setw(6) << std::setfill(’*’);

// Some important manipulators in <iomanip> are:

// setw (val): It is used to set the field width in output operations.
// setfill (c): It is used to fill the character ‘c’ on output stream.
// setprecision (val): It sets val as the new value for the precision of floating-point values.
// setbase(val): It is used to set the numeric base value for numeric values.
// setiosflags(flag): It is used to set the format flags specified by parameter mask.
// resetiosflags(m): It is used to reset the format flags specified by parameter mask.

// Some important manipulators in <ios> are:

// showpos: It forces to show a positive sign on positive numbers.
// noshowpos: It forces not to write a positive sign on positive numbers.
// showbase: It indicates the numeric base of numeric values.
// uppercase: It forces uppercase letters for numeric values.
// nouppercase: It forces lowercase letters for numeric values.
// fixed: It uses decimal notation for floating-point values.
// scientific: It uses scientific floating-point notation.
// hex: Read and write hexadecimal values for integers and it works same as the setbase(16).
// dec: Read and write decimal values for integers i.e. setbase(10).
// oct: Read and write octal values for integers i.e. setbase(10).
// left: It adjusts output to the left.
// right: It adjusts output to the right.
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  double y = 123456.123456789123456789;
  string x;
  x = "hello";
  cout << setw(10) << x << endl;
  cout << setw(10) << setfill('_') << x << endl;
  
}