#include <bits/stdc++.h>
using namespace std;
int main()
{
  // find palindrome with out reverse and extra space
  string s = "naman";
  int flag = 0, n = s.size();
  /*for (int i = 0, j = n - 1; i < n; i++, j--)
  {
    if (i < j)
    {
      if (s[i] != s[j])
      {
        flag = 1;
        break;
      }
    }
  }*/
  int i = 0, j = n - 1;
  while (i < j)
  {
    if (s[i] != s[j])
    {
      flag = 1;
      break;
    }
    i++;
    j--;
  }

  if (flag == 0)
    cout << "Palindrome";
  else
    cout << "Not Palindrome";
}