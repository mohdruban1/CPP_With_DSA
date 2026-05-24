#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  /*while (k != 0)
  {
    nums.insert(nums.begin(), nums.back()); // tc O(n)
    nums.pop_back();
    k--;
  }*/
  reverse(nums.begin(), nums.end());
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());
  for (int elem : nums)
  {
    cout << elem << " ";
  }
}