#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {1, 2, 0, 4, 3, 0, 5, 0};
  int p = 0, q = 1;
  int n = nums.size();
  while (q < n)
  {
    if (nums.at(p) == 0 && nums.at(q) != 0)
    {
      nums.at(p) = nums[q];
      nums.push_back(0);
    }
    else if (nums.at(p) == 0 && nums.at(q) == 0)
    {
      q++;
      continue;
    }
    else if (nums.at(p) != 0 && nums.at(q) != 0)
    {
      p++;
      q++;
    }
    p++;
    q++;
  }
  for (int elem : nums)
    cout << elem << " \t";
  return 0;
}