#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a1[] = {2, 3, 9, 12, 13}, a2[] = {4, 5, 10, 11, 14, 15};
  int n1 = sizeof(a1) / sizeof(a1[0]);
  int n2 = sizeof(a2) / sizeof(a2[0]);
  int a3[n1 + n2];
  int p1 = 0, p2 = 0, i = 0;
  // cout << n1 << " " << n2 << endl;
  while (p1 < n1 || p2 < n2)
  {
    if (a1[p1] < a2[p2])
      a3[i++] = a1[p1++];
    else
      a3[i++] = a2[p2++];
  }
  while (p1 < n1)
    a3[i] = a1[p1++];
  while (p2 < n2)
    a3[i] = a2[p2++];
  for (int elem : a3)
    cout << elem << "\t";
  return 0;
}