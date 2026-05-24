#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s1 = "ana";
  string s2 = "aae";
  vector<int> freq(26, 0);
  for (char c : s1)
    freq[c - 'a']++;
  for (char c : s2)
    freq[c - 'a']--;
  for (int elem : freq)
  {
    if (elem != 0)
    {
      cout << "not equal";
      return 0;
    }
  }
  cout << "equal";
  return 0;
}