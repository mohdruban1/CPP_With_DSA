#include <iostream>
using namespace std;
int main()
{
  int a[] = {5, 45, 9, 10, 2}, max_element = a[0];
  int n = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max_element)
      max_element = a[i];
  }
  cout <<  max_element;
  for (int curr_elem : a)
  {
    if (curr_elem > max_element)
      max_element = curr_elem;
  }
  cout << max_element;
}
