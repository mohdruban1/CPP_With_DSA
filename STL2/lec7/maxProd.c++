#include <bits/stdc++.h>
using namespace std;
int main()
{
  // find maximum prod of a triplet in the array
  // int a[] = {10, 3, 5, 6, 20}; // o/p=1200
  int a[] = {1, -4, 3, -6, 7, 0}; // o/p=168
  int n = sizeof(a) / sizeof(a[0]), maxprod = INT16_MIN, product = 1;
  // brute force TC O(n^3)
  // for (int i = 0; i < n; i++)
  //   for (int j = i + 1; j < n; j++)
  //     for (int k = j + 1; k < n; k++)
  //       maxprod = max(maxprod, a[i] * a[j] * a[k]);
  // sorting method TC O(nlogn)
  sort(a, a + n);

  int maxprod1 = a[n - 1] * a[n - 2] * a[n - 3];
  int maxprod2 = a[0] * a[1] * a[n - 1];
  maxprod = max(maxprod1, maxprod2);
  cout << maxprod;
  return 0;
}