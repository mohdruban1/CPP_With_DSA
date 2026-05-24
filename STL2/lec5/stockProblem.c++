#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {10, 1, 3, 6, 9, 2};
  int n = sizeof(a) / sizeof(a[0]);
  int profit = 0;
  /*//tc=O(n^2)
   for (int i = 0; i < n; i++)
   {
     for (int j = i + 1; j < n; j++)
       profit = max(profit, a[j] - a[i]);
   }*/
  int min_buy_price = a[0];
  for (int i = 1; i < n; i++)
  {
    min_buy_price = min(min_buy_price, a[i]);
    profit = max(profit, a[i] - min_buy_price);
  }
  cout << "max profit is : " << profit;
  return 0;
}