#include <iostream>
using namespace std;
int main()
{
  int a[] = {1, 2, 3,4}, sum = 0;
  int n = sizeof(a) / sizeof(a[0]);
  int expsum = (n + 2) * (n + 1) / 2;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }
  cout << "missing no is :" << expsum - sum;
  return 0;
}