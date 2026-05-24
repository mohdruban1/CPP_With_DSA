#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {4,6,8,5,2,1,7};
  int ans = 1, count = 1, end = nums[0], start;
  sort(nums.begin(), nums.end());
  for (int i = 1; i < nums.size(); i++)
  {
    cout << ans << " " << count << endl;
    if (nums.at(i) == nums.at(i - 1) + 1)
      count++;
    else
    {
      count = 1;
    }
    if (count > ans)
    {
      end = nums.at(i);
      ans = count;
    }
  }
  start = end - ans + 1;
  while (start <= end)
    cout << start++ << " ";
}