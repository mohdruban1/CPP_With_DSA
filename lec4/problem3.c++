#include <iostream>
using namespace std;
int main()
{
  int a[] = {12, 35, 1, 10, 34};
  int largest = a[0], second_largest = a[0];
  int n = sizeof(a) / sizeof(a[0]);

  for (int elem : a)
  {
    largest = max(largest, elem);
  }
  for (int elem : a)
  {
    if (elem < largest)
      second_largest = max(elem, second_largest);
  }
  cout << second_largest;
  return 0;
}