#include <bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int> nums, int target)
{
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        return {i, j};
      }
    }
  }
  return {};
}
int main()
{
  vector<int> nums = {1, 3, 4, 0, 4};
  vector<int> ans = fun(nums, 7);
  for (int elem : ans)
    cout << ans << " \t";
  return 0;
}
