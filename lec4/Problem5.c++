#include <iostream>
using namespace std;
int main()
{
  int a[] = {0, 1, 9,0, 8, 4, 0}, j = 0;
  int n = sizeof(a) / sizeof(a[0]);
  for (int elem : a)
  {
    if (elem != 0)
      a[j++] = elem;
  }
/*it is concept to reverse athe array in kth range  
for (int i = 0, k = j - 1; i < j; i++, k--)
  {
    if (i < k)
    { // spead is slow, no temp,no overflow
      a[i] = a[i] ^ a[k];
      a[k] = a[i] ^ a[k];
      a[i] = a[i] ^ a[k];
    }
  }*/
  for (int i = j; i < n; i++)
    a[i] = 0;
  for (int elem : a)
    cout << elem << endl;
  return 0;
}