#include <iostream>
using namespace std;
int main()
{
  int a[] = {1, 2, 3, 4, 20}, flag = 0;
  int n = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
      flag++;
  }
  if (flag == 0)
    cout << "sorted";
  else
    cout << "not sorted";
  return 0;
}