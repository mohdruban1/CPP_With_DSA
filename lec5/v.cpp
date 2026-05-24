#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v(1, 4);
  v.push_back(5);
  v.push_back(12);
  v.push_back(20);
  v.push_back(15);
  v.back() = 12;// override the element
  v.front()=17;// override the element
  /*  cout << *v.rbegin() << " " << *v.end() << "\n";
    cout << v.front() << " " << *v.cbegin() << " \n";*/
  // v.assign(4, 67);
  // v.push_back(32);
  // vector<int>::iterator it; or
  // v.erase(it + 3); // remove at specific position element
  // sort(v.rbegin(), v.rend());
  // vec.erase(remove(vec.begin(), vec.end(), target), vec.end());
  v.erase(remove(v.begin(),v.end(),12),v.end());
  auto it = v.begin();
  while (it < v.end())
    cout << *it++ << " ";
  /*  it = find(v.begin(), v.end(), 123);
    if (it != v.end())
      cout << "found";
    else
      cout << "not found";*/

  cout << " \n";
  advance(it,1);
  cout<< *it;
  /*  vector<int> v1 = {1, 4, 6};
    vector<int> mergevec;
    merge(v.begin(), v.end(), v1.begin(), v1.end(), back_inserter(mergevec));
    auto it1 = mergevec.begin();
    while (it1 < mergevec.end())
      cout << *it1++ << " ";*/
  /*  v.back();
    v.front();

    v.begin();
    v.end();

    v.cbegin();
    v.cend();

    v.crbegin();
    v.crend();

    v.emplace();
    v.emplace_back();

    v.empty();
    v.erase();

    v.rbegin();
    v.rend();
    v.insert();*/
}