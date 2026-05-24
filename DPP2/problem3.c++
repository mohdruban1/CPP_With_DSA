#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {1,1,2  };
  int n = nums.size() - 1;
  int i = 0, j = 0, count = 0;
  while (i < n)
  {
    if (nums[i + 1] == nums[i])
    {
      i++;
      count++;
    }
    else
    {
      nums[++j] = nums[++i];
    }
  }
  while (count != 0)
  {
    nums.pop_back();
    count--;
  }
  cout << nums.size();
}