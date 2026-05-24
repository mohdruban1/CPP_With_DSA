#include <bits/stdc++.h>
using namespace std;
int main()
{
  // prifix suffix problem i will understand to other source
  // int a[] = {2, 7, 3, 0, 4};
  // int n = sizeof(a) / sizeof(a[0]);
  // int b[n], productall = 1;
  // sc O(n),TC = O(n^2)
  /* for (int i = 0; i < n; i++)
   {
     product = 1;
     for (int j = 0; j < n; j++)
     {
       if (i != j)
         product = product * a[j];
       b[i] = product;
     }
   }*/
  // sc O(n),TC = O(n) problem a[i]=0 in divide then infinite
  /* for (int p : a)
     productall = productall * p;
   for (int i = 0; i < n; i++)
     b[i] = productall / a[i];*/

  // sc O(n),TC = O(n) problem a[i]=0 handel all case
  /* int count = 0;
   for (int elem : a)
     if (elem == 0)
       count++;
   if (count == 0) // #zero =0
   {
     for (int p : a)
       productall = productall * p;
     for (int i = 0; i < n; i++)
       b[i] = productall / a[i];
   }
   else if (count == 1) // #zero=1
   {
     for (int p : a)
       if (p != 0)
         productall *= p;
     for (int i = 0; i < n; i++)
       if (a[i] == 0)
         b[i] = productall;
       else
         b[i] = 0;
   }
   else // #zero is >=2 if two zero then o/p is zero
   {
     for (int i = 0; i < n; i++)
       b[i] = 0;
   }
   */
  // for (int p : answer)
  //   cout << p << " \t";
  return 0;
}