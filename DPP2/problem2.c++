#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str = "the sky is blue";
  int n = str.size();
  int i = n - 1, j = n - 1;
  /*//my method  while (i >= 0 && j >= 0)
    {
      if (str.at(j) != ' ')
      {
        j--;
      }
      else
      {
        for (int k = j + 1; k <= i; k++)
          cout << str[k];
        j--;
        i = j;
        cout << " ";
      }
    }
    for (int k = j + 1; k <= i; k++)
      cout << str[k];*/
  string word = "";
  string ans = "";
  for (char c : str)
  {
    if (c != ' ')
      word += c;
    else
    {
      ans = " " + word + ans;
      word = "";
    }
  }
  ans = word + ans;
  cout << ans;
}