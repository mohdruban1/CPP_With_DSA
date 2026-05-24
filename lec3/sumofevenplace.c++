#include <iostream>
using namespace std;
int main()
{
  int a[] = {3, 5, 1, 6, 8}, sum = 0;
  // sum of all the element even place
  //  approach 1 better
  int n = sizeof(a) / sizeof(a[0]), s = 0;
  // for (int i = 0; i < n; i += 2)
  // {
  //   sum += a[i];
  // }
  // cout << "sum of the even position : " << sum;
  // aproach 2
  // for (int elem : a)
  // {
  //   if (s % 2 == 0)
  //     sum += elem;
  //   s++;
  // }
  // sum of odd place
  for (int i = 1; i < n; i += 2)
  {
    sum += a[i];
  }
  cout << "sum of the odd position : " << sum;
  return 0;
}