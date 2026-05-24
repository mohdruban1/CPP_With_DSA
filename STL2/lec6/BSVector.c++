#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> a, int low, int high, int elem)
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
  vector<int> a = {1, 2, 3, 5, 7, 9};
  int ans = binarySearch(a, 0, a.size(), 15);
  if (ans == -1)
    cout
        << "element not found";
  else
    cout << "element is  found  at index " << ans;
  return 0;
}