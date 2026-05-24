// find smallest missing positive number
// given unsorted array +ve,-ve number
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {7, 1, -3, 4, 2, 1};
  int n = sizeof(a) / sizeof(a[0]);
  int ans = 1;
  /*TC=O(nlogn)
  sort(a, a + n);
  for (int i = 0; i < n; i++)
  {
    if (a[i] == ans)
      ans++;
    else if (a[i] > ans)
      break;
  }*/
  // using element as index
  /* int  temp[n];
   for (int i = 0; i < n; i++)
   {
     temp[i] = 0;
   }
   for (int i = 0; i < n; i++)
   {
     if (a[i] >=1 && a[i] <= n)
       temp[a[i] - 1] = 1;
   }
   for (int i = 0; i < n; i++)
   {
     if (temp[i] == 0)
     {
       ans = i + 1;
       break;
     }
   }*/
  cout << ans;
  return 0;
}
