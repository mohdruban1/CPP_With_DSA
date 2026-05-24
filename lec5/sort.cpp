#include <iostream>
#include <algorithm>
using namespace std;
bool desc(int x, int y);
int main()
{
  int a[] = {5, 7, 3, 6, 2};
  // sort(a,a+5) by default assentding order
  sort(a, a + 5, desc); // false then swap
  for (int elem : a)
    cout << elem;
  return 0;
}
bool desc(int x, int y)
{
  return x > y;
}