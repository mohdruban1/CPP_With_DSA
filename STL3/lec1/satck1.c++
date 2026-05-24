#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.top() = 40; // replace with top element
  cout << s.top() << endl;
  cout << s.size() << endl;
  return 0;
}