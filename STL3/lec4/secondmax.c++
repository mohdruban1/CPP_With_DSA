#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {12, 35, 1, 10, 34, 1};
  int n = nums.size();
  int firstmax = -1, secondmax = -1;
  for (int elem : nums)
    firstmax = max(elem, firstmax);
  for (int elem : nums)
  {
    if (elem < firstmax)
      secondmax = max(elem, secondmax);
  }
  cout << secondmax;
  return 0;
}