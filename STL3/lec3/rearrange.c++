#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {-5, -2, 5, 2, 4, 7};
  vector<int> pos, neg;
  for (int elem : a)
  {
    if (elem >= 0)
      pos.push_back(elem);
    else
      neg.push_back(elem);
  }
  int i = 0, j = 0, k = 0;
  while (j < pos.size() && k < neg.size())
  {
    if (i % 2 == 0)
      a[i++] = pos.at(j++);
    else
      a[i++] = neg.at(k++);
  }
  
  while (j < pos.size())
    a[i++] = pos.at(j++);
  while (k < neg.size())
    a[i++] = neg.at(k++);

  for (int elem : a)
    cout << elem << endl;
}