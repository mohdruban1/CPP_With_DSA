// given array  divide it into 3 contigous non empty element with equal sum
// ex a=[1,3,4,0,4] ans [1,3] [4],[0,4]
#include <bits/stdc++.h>
using namespace std;
int FindSum(vector<int> a, int start, int end)
{
  int sum = 0;
  for (int i = start; i <= end; i++)
    sum += a[i];
  return sum;
}
int main()
{
  vector<int> a = {1, 3, 4, 0, 4};
  int n = a.size();
  int sum1, sum2, sum3;
  int ans[2] = {-1, 1};
  // TC O(n^3)
  /* for (int i = 0; i <= n - 3; i++)
   {
     for (int j = i + 1; j <= n - 2; j++)
     {
       sum1 = FindSum(a, 0, i); //TC=O(n)
       sum2 = FindSum(a, i + 1, j);
       sum3 = FindSum(a, j + 1, n - 1);
       if (sum1 == sum2 && sum2 == sum3)
       {
         ans[0] = i;
         ans[1] = j;
         break;
       }
     }
   }*/
  // tc=O(n)
  int total = 0;
  for (int elem : a)
    total += elem;
  if (total % 3 == 0)
  {
    int sum = 0, c = 0;
    for (int i = 0; i <= n - 2; i++)
    {
      sum += a[i];
      if (sum == total / 3)
      {
        ans[c++] = i;
        sum = 0;
        if (c == 2)
          break;
      }
    }
  }
  cout << "i = " << ans[0] << "  j= " << ans[1] << endl;
  return 0;
}