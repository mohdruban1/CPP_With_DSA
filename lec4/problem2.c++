#include <iostream>
using namespace std;
int main()
{
  int a[] = {1, 2, 3, 4, 5}, temp;
  temp = a[0];
  int n = sizeof(a) / sizeof(a[0]);
  /*//it is better
     for (int i = 0; i < n-1; i++)
      a[i] = a[i + 1];
    a[n - 1] = temp; */

  // or
  /* for (int i = 0; i < n - 1; i++)
   {
     temp = a[i];
     a[i] = a[i + 1];
     a[i + 1] = temp;
   }*/

  for (int elem : a)
    cout << elem << endl;
  return 0;
}