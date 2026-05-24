#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  vector<int> nums= {9,2,1};
  int n = nums.size(), carry = 0, sum = 0;
  nums[n - 1]++;
  for (int i = n - 1; i >= 0; i--)
  {
    if (nums.at(i) > 9)
    {
      nums[i] = 0;
      carry = 1;
    }
    else
    {
      nums[i] += carry;
      if (nums.at(i) > 9)
      {
        nums[i] = 0;
        carry = 1;
      }
      else
      {
        carry = 0;
      }
    }
  }
  if (carry == 1)
    nums.insert(nums.begin(), carry);
  for(int elem : nums)
  cout<< elem << " ";
}