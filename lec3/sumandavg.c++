#include <iostream>
using namespace std;
int main()
{
  int a[] = {4, 5, 3, 5, 2, 7};
  float sum = 0;
  // sumof the array
  int s = 0;
  for (int elem : a)
  {
    sum += elem;
    s++; // no of element in array
  }
  cout << "sum of the array is :" << sum << endl;

  // avg of the array
  // int s = sizeof(a) / sizeof(a[0]);
  float avg = sum / s;
  cout << "avg of the array is :" << avg << endl;

  return 0;
}