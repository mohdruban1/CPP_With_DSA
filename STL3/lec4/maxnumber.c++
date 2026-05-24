#include <bits/stdc++.h>
using namespace std;
// max num only single digit
int nextmax(vector<int> arr, int firstmax)
{
  int secondmax = -1;
  for (int elem : arr)
  {
    if (elem < firstmax)
      secondmax = max(elem, secondmax);
  }
  return secondmax;
}
int main()
{
  vector<int> nums = {2, 3, 4};
  int n = nums.size(), digit = 0;
  int max1;
  for (int elem : nums)
    max1 = max(elem, max1);
  for (int i = n - 1; i >= 0; i--)
  {
    digit += max1 * pow(10, i);
    max1 = nextmax(nums, max1);
  }
  cout << digit;
}