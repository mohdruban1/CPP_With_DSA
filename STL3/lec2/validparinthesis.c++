#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str = "()()";
  stack<char> s;
  int flag = 0;
  for (char c : str)
  {
    if (c == '(')
      s.push(c);
    else if (!s.empty()) //  && s.top() == '(' not neccessary
      s.pop();
    else
    {
      flag = 1;
      break;
    }
  }
  if (flag == 0 && s.empty())
    cout << "valid";
  else
    cout << "not valid";
  return 0;
}