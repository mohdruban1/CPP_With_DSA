#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str = "aditya";
  vector<int> freq(26, 0);
  for (char c : str)
  {
    freq[c - 'a']++;
  }
  for (int f : freq)
    cout << f << " ";
  cout << endl;
  int ind;
  for (int i = 0; i < str.size(); i++)
  {
    ind = str[i] - 'a';
    if (freq[ind] == 1)
    {
      cout << i;
      break;
    }
  }
}