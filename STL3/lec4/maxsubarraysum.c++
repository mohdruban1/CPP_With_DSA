#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {2, 3, -8, 7, -1, 2, 3};
  int ans = nums[0], n = nums.size(), subArraySum = nums[0];
  // print all the sub array
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      for (int k = i; k <= j; k++)
        cout << nums.at(k);
      cout << ",";
    }
    cout << endl;
  }
  // brute force approach tc =O(n^2)
  /*for (int i = 0; i < n; i++)
  {
    subArraySum = 0;
    for (int j = i; j < n; j++)
    {
      subArraySum += nums[j];
      ans = max(ans, subArraySum);
    }
  }*/
  for (int i = 1; i < n; i++)
  {
    subArraySum = max(subArraySum + nums[i], nums[i]);
    ans = max(ans, subArraySum);
    }
  }
  cout << ans << endl;
  
}