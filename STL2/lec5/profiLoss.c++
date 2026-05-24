#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {100, 180, 260, 310, 40, 535, 695};
  int n = sizeof(a) / sizeof(a[0]), buy = a[0], sell = a[0], profit = 0, i = 0;
  /*  while (i < n - 1)
    {
      while (i < n - 1 && a[i] >= a[i +1])
        i++;
      buy = a[i];
      while (i < n - 1 && a[i] <= a[i + 1])
        i++;
      sell = a[i];
      cout << "buy : " << buy << endl;
      cout << "sell : " << sell << endl;
      cout << "profit : " << sell - buy << endl;
      profit += sell - buy;
    }*/
  // calculate all transaction thne colllect maximum teransaction;
  /*  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] < a[i + 1])
    {
      profit += a[i + 1] - a[i];
      cout << "buy : " << a[i] << "n sell : " << a[i + 1] << " profit : " << a[i + 1] - a[i] << endl;
    }
  }*/
  //
  for (int i = 0; i < n - 1; i++)
    profit += max(0, a[i + 1] - a[i]);
  cout << "overal profit : " << profit;
  return 0;
}