#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {3, 5, 1, 7, 9, 2};
  int n = sizeof(a) / sizeof(a[0]), elem = 9, ans = -1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == elem)
    {
      ans = i;
      break;
    }
  }
  if (ans == -1)
    cout << "element not found";
  else
    cout << "element is  found  at index " << ans;
}