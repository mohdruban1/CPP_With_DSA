#include <bits/stdc++.h>
using namespace std;
int sumSingle(int digit)
{
  int sum = 0;
  while (digit > 0)
  {
    sum += digit % 10;
    digit /= 10;
  }
  if (sum >= 0 && sum < 10)
    return sum;
  else
    sumSingle(sum);
}
int main()
{
  int digit, sum = 0;
  cout << " enter the no: ";
  cin >> digit;
  // cout << sumSingle(digit);
  // or
  /* while (sum > 9 || digit > 0)
   {
     if (digit == 0)
     {
       digit = sum;
       sum = 0;
     }
     sum += digit % 10;
     digit /= 10;
     cout << sum << endl;
   }*/
  return 0;
}
/*#include <iostream>
using namespace std;

int digitalRoot(int n)
{
  if (n == 0)
    return 0;
  return 1 + (n - 1) % 9;
}

int main()
{
  int n;
  cout << "Enter the number: ";
  cin >> n;

  cout << digitalRoot(n);
  return 0;
}*/
/*
| Method               | Time Complexity |
| -------------------- | --------------- |
| Recursive digit sum  | O(log n)        |
| While loop version   | O(log n)        |
| Digital root formula | O(1)            |
*/