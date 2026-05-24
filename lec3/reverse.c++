#include <iostream>
using namespace std;
int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7}, temp;
  int n = sizeof(a) / sizeof(a[0]);
  // for (int j = n - 1; j >= 0; j--)
  //   cout << a[j] << endl;
  // interview : do this an incrementing loop and also without any tempory array;
  for (int i = 0, j = n - 1; i < n; i++, j--)
  {
    cout << a[n - 1 - i] << endl;
  }
  return 0;
}