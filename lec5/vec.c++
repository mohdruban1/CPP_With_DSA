#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// or
//  #include <vector>
//  #include <algorithm>
int main()
{
  vector<int> v;
  v.push_back(12);
  v.push_back(20);
  v.push_back(15);
  v.push_back(4);
  v.push_back(32);
  /*sorting
   //sort assending order
   // sort(v.begin(), v.end());
   // sort decending order
   // sort(v.rbegin(),v.rend());
   */
  vector<int>::iterator it;
  // it = v.end() - 1;
  // cout << *it;

  // print all element through iterator
  /* it = v.begin();
   for (int i = 0; i < v.size(); i++)
     cout << *(v.begin() + i) << endl;
  // or
  // search in vector
  it = find(v.begin(), v.end(), 22);
  if (it != v.end())
    cout << "found";
  else
    cout << "not found";
  */

  /*// search in vector
  it = find(v.begin(), v.end(), 22);
  if (it != v.end())
    cout << "found";
  else
    cout << "not found";
    */
  // reverse array
  reverse(v.begin(), v.end());
  it = v.begin();
  for (int i = 0; i < v.size(); i++)
    cout << *(v.begin() + i) << endl;
  return 0;
}
