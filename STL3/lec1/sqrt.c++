#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, ans = 1;
  cout << "enter the number is : ";
  cin >> n;
  /*for (int i = 0; i < n; i++)
  {
    if (i * i > n)
    {
      ans = i - 1;
      break;
    }
  }*/
  /*  int i = 1;
    while (i * i <= n)
      i++;
    ans = i - 1;*/
  // concept : binary search on answer
  int low = 1, high = n, mid, count = 0;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (mid * mid <= n)
    {
      ans = mid;
      low = mid + 1;
    }
    else
      high = mid - 1;
    cout << "low " << low << "high " << high << "count " << ++count << endl;
  }
  cout << ans;
}