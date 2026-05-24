#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {10, 1, 3, 6, 9, 2};
  int n = sizeof(a) / sizeof(a[0]), profit = 0, min_buy_price = a[0];
  for (int i = 1; i < n; i++)
  {
    min_buy_price = min(min_buy_price, a[i]);
    profit = max(profit, a[i] - min_buy_price);
  }
  cout << "max profit is : " << profit;
  return 0;
}