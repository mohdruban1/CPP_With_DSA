#include <iostream>
using namespace std;
int main()
{
  int a[] = {1, 2, 3, 4, 5};
  int n = sizeof(a) / sizeof(a[0]);
  for (int i = 0, j = n - 1; i < n; i++, j--)
  {
    if (i < j)
    { // spead is slow, no temp,no overflow
      a[i] = a[i] ^ a[j];
      a[j] = a[i] ^ a[j];
      a[i] = a[i] ^ a[j];
    }
  }
  for (int elem : a)
    cout << elem << endl;
  return 0;
}
/*  this swap method can occur overflow for large data size, not recomended for swap
  a[i] = a[i] + a[j];
  a[j] = a[i] - a[j];
  a[i] = a[i] - a[j];
*/
/*speed fast and redable
temp=a[i]
a[i]=a[j]
a[j]=temp
*/