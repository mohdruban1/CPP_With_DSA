#include <bits/stdc++.h>
using namespace std;
int main()
{ // first occurence of duplicate number
  int a[] = {2, 3, 5, 6, 8, 4, 1};
  int n = sizeof(a) / sizeof(a[0]), peak = 0;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      peak = a[i];
      break;
    }
  }
  cout << peak;

  return 0;
}