#include <iostream>
#include <string>
using namespace std;
struct Employee
{ //anew data type :D
  int eno;
  string ename;
  string jop;
  float salary;
  float bonus;
  float total_salary; //salary &&& bonus;)
};
void get_data(Employee arr[], int size);
void set_bonus(Employee arr[], int size);
void print(Employee arr[], int size);
int main()
{
  Employee emps[3];
  get_data(emps, 3);
  set_bonus(emps, 3);
  print(emps, 3);
  return 0;
}
void get_data(Employee arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << "Enter emp & name & jop for employee number " << i + 1 << "\n";
    cout << "Employee number = ";
    cin >> arr[i].eno;
    cout << "Employee name = ";
    cin >> arr[i].ename;
    cout << "Employee jop = ";
    cin >> arr[i].jop;
    if (arr[i].jop == "manager")
      arr[i].salary = 5000;
    else if (arr[i].jop == "engineer")
      arr[i].salary = 3000;
    else if (arr[i].jop == "clerck")
      arr[i].salary = 2000;
    else
      arr[i].salary = 1000;
  }
}
void set_bonus(Employee arr[], int size)
{
  float percent;
  for (int i = 0; i < size; i++)
  {
    cout << i + 1 << " => Enter the bonus percentage for Employee => " << arr[i].ename << " number => " << arr[i].eno << "\n ";
    cout
        << "percent / 100 = ";
    cin >> percent;
    arr[i].bonus = arr[i].salary * percent;
  }
}
void print(Employee arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << i + 1 << " => Employee => " << arr[i].ename << " number => " << arr[i].eno << " data\n";
    cout << "Employee numper => " << arr[i].eno << "\n";
    cout << "Employee name => " << arr[i].ename << "\n";
    cout << "Employee jop => " << arr[i].jop << "\n";
    cout << "Employee salary => " << arr[i].salary << "\n";
    cout << "Employee bonus => " << arr[i].bonus << "\n";
    cout << "Employee total_salary => " << arr[i].salary + arr[i].bonus << "\n";
    cout << "**********************************\n";
  }
}