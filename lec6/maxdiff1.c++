#include <iostream>
using namespace std;
int main()
{
  // find maximum diff between two no a[j]-a[i] such that j>i
  int a[] = {2, 3, 10, 6, 8, 1}, maxdiff = a[1] - a[0], diff, min_elem = a[0];
  int n = sizeof(a) / sizeof(a[0]);
  /* for (int i = 0; i < n; i++)
   {
     for (int j = 0; j < n; j++)
     {
       if (j > i)
       {
         diff = a[j] - a[i];
         if (maxdiff < diff)
           maxdiff = diff;
       }
     }*/
  // or
  /*
    for (int j = 1; j < n; j++)
    {
      for (int i = 0; i < j; i++)
      {
        diff = a[j] - a[i];
        maxdiff = max(maxdiff, a[j] - a[i]);
      }
    }*/
  // orO(n)
  for (int i = 1; i < n; i++)
  {
    maxdiff = max(maxdiff, a[i] - min_elem);
    min_elem = min(min_elem, a[i]);
  }
  cout << maxdiff;
}