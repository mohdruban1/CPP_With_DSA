#include <bits/stdc++.h>
using namespace std;
int main()
{
  /*  priority_queue<int> pq;//default max heap
    pq.push(30);
    pq.push(10);
    pq.push(50);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;*/

  priority_queue<int, vector<int>, greater<int>> pq; //  min heap
  pq.push(30);
  pq.push(10);
  pq.push(50);
  cout << pq.top() << endl;
  pq.pop();
  cout << pq.top() << endl;
}
