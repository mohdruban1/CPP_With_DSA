#include <bits/stdc++.h>
using namespace std;
int main()
{
  // elem are from 1 to N only,among there ,1 elemis missing and 1 elem is repeted twice,find missing and repeting element
  int a[] = {2, 1,2}, count = 0, actulSum = 0, duplicateElem = -1, missingElem = -1;
  int n = sizeof(a) / sizeof(a[0]);
  int expSum = n * (n + 1) / 2;
  // cout << expSum << endl;
  for (int elem : a)
    actulSum += elem;
  // TC=O(n^2)
  /*  for (int i = 0; i < n; i++)
    {
      for (int j = i+1; j < n; j++)
        // if (i != j)
          if (a[i] == a[j])
            count++;
      if (count == 1)
      {
        duplicateElem = a[i];
        break;
      }
    }*/

  // approach2 ,first to sort array sorting ki TC=O(nlogn) by default
  /*  sort(a, (a + n));
    for (int i = 0; i < n; i++)
    {
      if (a[i] == a[i + 1])
      {
        duplicateElem = a[i];
        break;
      }
    }*/
  //  missingElem = expSum - actulSum + duplicateElem;
  // approach 3 O(n)
  int elem;
  for (int i = 0; i < n; i++)
  {
    elem = abs(a[i]);
    if (a[elem - 1] > 0)
      a[elem - 1] = -1 * a[elem - 1];
    else
      duplicateElem = elem;
  }
  for (int i = 0; i < n; i++)
    if (a[i] > 0)
    {
      missingElem = i + 1;
      break;
    }
  cout << duplicateElem << endl;
  cout << missingElem << endl;
}