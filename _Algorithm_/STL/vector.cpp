#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v(4); /* defualt value = 0 */
  v[0] = 10;
  v.push_back(50); /* add in the last of vector*/
  vector<int> test1 = {1, 2, 3, 4};
  cout << test1[2] << endl;
  vector<int> test2(test1); /* call for the copy conestracter */
  cout << test2[2] << endl;
  vector<int> ine1(5, 100); /* default value equal 100 fro tje 5 elements */
  vector<int> ine2(6, 200);
  cout << ine1[2] << endl;
  ine1.swap(ine2); /* swap all elements by refrence */
  cout << ine1[2] << endl;
  cout << v.front() << endl; /* first element */
  cout << v.back() << endl;  /* last element */
  cout << v.at(0) << endl;   /* index element */
  vector<int> cap(100);
  cap.push_back(5);
  cout << "Size = " << cap.size() << endl;
  cout << "Capacity = " << cap.capacity() << endl; /* max element  */
  cout << "Max_size = " << cap.max_size() << endl;
  cout << "Empty = " << cap.empty() << endl;
  // print vectro
  // for (int i = 0; i < 100; i++)
  // {
  //   cout << ine1[i] << " ";
  // }
  ine1.pop_back(); /* remove last elemnt */
  ////////////////////////////////////////////////////////////////////////////////////////////////////////
  vector<int> v3 = {10, 20, 30, 40};
  vector<int>::iterator it = v3.begin();
  for (it; it != v3.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
  cout << *it << endl;
  it++;
  cout << *it << endl;
  it = v3.end() - 1;
  cout << *it << endl;
  vector<int>::reverse_iterator rit = v3.rbegin();
  cout << *rit << endl;
  for (rit; rit != v3.rend(); rit++)
  {
    cout << *rit << " ";
  }
  cout << endl;
  vector<int>::const_reverse_iterator crit = v3.crbegin();
  cout << *crit << endl;
  for (crit; crit != v3.crend(); crit++)
  {
    cout << *crit << " ";
  }
  cout << endl;
  vector<int>::const_iterator cit = v3.cbegin();
  cout << *cit << endl;
  for (cit; cit != v3.cend(); cit++)
  {
    cout << *cit << " ";
  }
  cout << endl;
  auto itir = v3.begin();
  cout << *itir << endl;
  ////////////////////////////////////////////////////////////////////////////////////////////////////////
  vector<int> v4 = {4, 10, 15, 20};
  v4.insert(v4.begin(), 55);
  v4.emplace(v4.begin(), 11);
  v4.insert(v4.end() - 1, 12);
  v4.erase(v4.begin() + 1);
  for (auto it = v4.begin(); it != v4.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
  v4.resize(10);
  v4.shrink_to_fit();
}
