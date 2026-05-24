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
  cout << sumSingle(digit);
  return 0;
}