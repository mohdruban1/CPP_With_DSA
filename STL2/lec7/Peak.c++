#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int low, int high, int n)
{
  int mid = (low + high) / 2;
  // handle edge cases
  if (n == 1)
    return a[0];
  else if (a[0] > a[1]) // n==2 and array is decending order
    return a[0];
  else if (a[n - 2] < a[n - 1]) // array is incresing order
    return a[n - 1];
  else
  {
    if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
      return a[mid];
    else if (a[mid] > a[mid - 1]) // a[mid is in incresing part]
      return binarySearch(a, mid + 1, high, n);
    else // move left a[mid]is in  decresing part
      return binarySearch(a, low, mid - 1, n);
  }
}
int main()
{ /*array with distinct element you have to find the peak elem peak elem is greter then all the elemet on its left and is greter then all the elem on its right chield */

  /* inthe input array,first few element are in incresing order and remening element are in decrising order */
  int a[] = {2, 3, 5, 6, 5, 4, 1}; // bitonic array ans=8

  int n = sizeof(a) / sizeof(a[0]), peakElem = -1;
  // handle edge cases
  /*  if (n == 1)
      peakElem = a[0];
    else if (a[0] > a[1]) // n==2 and array is decending order
      peakElem = a[0];
    else if (a[n - 2] < a[n - 1]) // array is incresing order
      peakElem = a[n - 1];
    else
    {
      int low = 1, high = n - 2, mid;
      while (low <= high)
      {
        mid = (low + high) / 2;
        if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
        {
          peakElem = a[mid];
          break;
        }
        else if (a[mid] > a[mid - 1]) // a[mid is in incresing part]
          low = mid + 1;
        else // move left a[mid]is in  decresing part
          high = mid - 1;
      }
    }*/
  peakElem = binarySearch(a, 0, n - 1, n);
  cout << peakElem;
  return 0;
}