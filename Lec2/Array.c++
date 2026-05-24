#include <iostream>
using namespace std;
int main()
{
  float a[5] = {1, 2, 3, 4.9, 5};
  float sum = 0;
  int n = sizeof(a) / sizeof(float); // or
  int n = sizeof(a) / sizeof(a[0]);  // it is generally because any time change the type of a
  // and why be choose a[0] ans: 1 elemnet is compulsory in array if array is created
  cout << n << endl;
  for (int i = 0; i < n;)
    sum += a[i++];
  cout << sum << endl;
  return 0;
}