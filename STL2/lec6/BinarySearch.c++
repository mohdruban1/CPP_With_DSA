#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int low, int high, int elem)
{
  int mid;
  if (low > high)
    return -1;
  else
  {
    mid = (low + high) / 2;
    if (a[mid] == elem)
      return mid;
    else if (a[mid] < elem)
      return binarySearch(a, mid + 1, high, elem);
    else
      return binarySearch(a, low, mid - 1, elem);
  }
}
int main()
{
  int a[] = {1, 2, 3, 5, 7, 9};
  int n = sizeof(a) / sizeof(a[0]), elem = 1, ans;
  int low = 0, high = n - 1, mid;
  /*
    while (low <= high)
    {
      mid = floor((low + high) / 2);
      if (a[mid] == elem)
      {
        ans = mid;
        break;
      }
      else if (a[mid] < elem)
        low = mid + 1;
      else
        high = mid - 1;
    }*/
  ans = binarySearch(a, low, high, elem);
  if (ans == -1)
    cout
        << "element not found";
  else
    cout << "element is  found  at index " << ans;
  return 0;
}