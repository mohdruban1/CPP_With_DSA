#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {1, 0, 2, 2, 1, 0, 0, 1, 2, 1};
  int n = sizeof(a) / sizeof(a[0]), b[n];
  // for (int i = 0; i < n; i++)
  //   b[i] = -1;
  // approach1 sc=O(n),TC=O(n)
  /* int j = 0;
   for (int i = 0; i < n; i++)
     if (a[i] == 0)
       b[j++] = a[i];
   for (int i = 0; i < n; i++)
     if (a[i] == 1)
       b[j++] = a[i];
   for (int i = 0; i < n; i++)
     if (a[i] == 2)
       b[j++] = a[i];
   for (int i = 0; i < n; i++)
     a[i] = b[i];*/

  // or two pointer approach sc=O(n),TC=O(n)
  /*  int j = n - 1, k = 0;
    for (int i = 0; i < n; i++)
      if (a[i] == 0)
        b[k++] = 0;
      else if (a[i] == 2)
        b[j--] = 2;
    for (int i = k; i <= j; i++)
      b[k++] = 1;
    for (int i = 0; i < n; i++)
      a[i] = b[i];*/
  // approach3 sc=O(1),TC=O(n)
  int c0 = 0, c1 = 0, c2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
      c0++;
    else if (a[i] == 1)
      c1++;
    else
      c2++;
  }
  int i = 0;
  while (c0-- != 0)
    a[i++] = 0;
  while (c1-- != 0)
    a[i++] = 1;
  while (c2-- != 0)
    a[i++] = 2;
  for (int elem : a)
    cout << elem << "\t";
  return 0;
}
