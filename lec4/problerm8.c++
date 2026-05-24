#include <iostream>
using namespace std;
int main()
{
  // next solution in stl2 lec 2 start
  int a[] = {16, 17, 4, 3, 5, 2}, count = 0, i, k;
  int n = sizeof(a) / sizeof(a[0]);
  for (k = 0; k < n; k++)
  {
    for (i = 1; i < n; i++)
    {
      if (a[k] > a[i + k])
        count++;
    }
    if (count == 0)
      cout << a[k];
  }
  return 0;
}