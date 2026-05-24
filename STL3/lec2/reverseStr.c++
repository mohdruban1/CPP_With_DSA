#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<char> s;
  string str = "abcd";
  int n = str.size();
  for (char c : str)
    s.push(c);
  str.clear();
  while (!s.empty())
  {
    str += s.top();
    s.pop();
  }
  cout << str;
}