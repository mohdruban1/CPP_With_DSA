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
    {
      binarySearch(a, low, mid - 1, elem);
      return mid;
    }
    else if (a[mid] < elem)
      return binarySearch(a, mid + 1, high, elem);
    else
      return binarySearch(a, low, mid - 1, elem);
  }
}
int main()
{ // first occurence of duplicate number
  int a[] = {2, 4, 5, 5, 5, 5, 5, 6, 7, 7, 7, 8, 8};
  int n = sizeof(a) / sizeof(a[0]), elem = 5, ans = -1;
  int low = 0, high = n - 1, mid;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (a[mid] == elem)
    {
      ans = mid;
      high = mid - 1; // first occurence
      // low= mid +1; // last occurence
    }
    else if (a[mid] < elem)
      low = mid + 1;
    else
      high = mid - 1;
  }
  // ans = binarySearch(a, low, high, elem);
  if (ans == -1)
    cout << "element not found";
  else
    cout << "element is  found  first occurence : " << ans;
  return 0;
}