#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s = "aditya";
  // int pos = s.find("a");
  // cout << pos << endl;
  // s.erase(2,1);
  // s.replace(1, 3, "HEY");
  string str = s;
  // reverse(str.begin(), str.end());
  // cout << str << endl;
  // cout << str.compare(s) << endl;
  // if (str.compare(s))
  // {
  //   cout << " palindrome" << endl;
  // }
  reverse(str.begin() + 1, str.begin() + 4);
  cout << str << endl;
  cout << s << endl;
}