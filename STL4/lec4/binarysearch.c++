#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[4][4] = {{2, 4, 5, 7}, {10, 13, 15, 18}, {12, 17, 19, 22}, {23, 24, 26, 28}};
  int r = sizeof(a) / sizeof(a[0]);
  int c = sizeof(a[0]) / sizeof(a[0][0]);
  int low, high, mid, k = 15;
  for (int i = 0; i < r; i++)
  {
    low = 0, high = c - 1;
    while (low <= high)
    {
      mid = (low + high) / 2;
      if (a[i][mid] == k)
      {
        cout << i << " " << mid;
        break;
      }
      else if (a[i][mid] < k)
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
}
