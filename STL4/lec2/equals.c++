#include <bits/stdc++.h>
using namespace std;
int main()
{ // make all array element are equals
  vector<int> nums = {8, 8, 7};
  int opr = 0;
  sort(nums.begin(), nums.end());
  while (nums.front() != nums.back())
  {
    for (int i = 0; i < nums.size()-1; i++)
    {
      nums.at(i)++;
    }
    sort(nums.begin(), nums.end());
    opr++;
  }
  cout<< opr;
}