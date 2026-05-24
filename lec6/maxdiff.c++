#include <iostream>
using namespace std;
int main()
{
  // find maximum diff between two no
  int a[] = {2, 3, 10, 6, 8, 1}, maxdiff = 0, diff, maxe = a[0], mine = a[0];
  int n = sizeof(a) / sizeof(a[0]);
  // O(n^2)
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     diff = a[i] - a[j];
  //     if (maxdiff < diff)
  //       maxdiff = diff;
  //   }
  // }
  // or O(n^2)
  // for (int x : a)
  // {
  //   for (int y : a)
  //     maxdiff = max(x - y, maxdiff);
  // }
  // orO(n)
  for (int x : a)
  {
    maxe = max(maxe, x);
    mine = min(mine, x);
  }
  maxdiff = maxe - mine;
  cout << maxdiff;
}