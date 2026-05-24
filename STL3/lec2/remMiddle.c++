#include <bits/stdc++.h>
using namespace std;
int main()
{
  // remove middle element from stack size is odd ip:1,2,3,4,5,6,7 o/p : 1,2,3,5,6,7
  stack<int> s;
  stack<int> s1;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);
  s.push(7);
  int n = s.size();
  int mid = n / 2;
  for (int i = 0; i < n; i++)
  {
    if (i != mid)
      s1.push(s.top());
    s.pop();
  }
  while (!s1.empty())
  {
    s.push(s1.top());
    s1.pop();
  }
  while (!s1.empty())
  {
    cout << s1.top() << " ";
    s1.pop();
  }
}