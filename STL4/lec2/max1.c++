#include <bits/stdc++.h>
using namespace std;
int main()
{
  /* given a binary array 0/1
   find the maximum length of subarray containing all is flipping atmost k 0 to 1
   ex : {1,1,0},k=1;
   ans=3;

   ex: {1,0,0,1,0,1,0,1,0} k=2
   ans=5*/
  vector<int> nums = {1, 0, 0, 1, 0, 1, 0, 1, 0};
  int k = 2, Zero, subarr_len, start = 0, end = 0, ans=0;
  for (int i = 0; i < nums.size(); i++)
  {
    Zero = 0;
    for (int j = i; j < nums.size(); j++)
    {
      if (nums.at(j) == 0)
        Zero++;
      if (Zero <= k)
      {
        subarr_len = j - i + 1;
        if (subarr_len > ans)
        {
          ans = subarr_len;
          start = i;
          end = j;
        }
      }
    }
  }
  cout << ans << endl;
  cout << "subarrray beetween " << start << "and" << end << endl;
}