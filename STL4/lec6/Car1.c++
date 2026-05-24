#include <bits/stdc++.h>
using namespace std;
// base class /parent class
class Car1
{
public:
  string brand = "Suzuki";
  Car1()
  {
    cout << "Default constructor";
  }

public:
  void applyHorn()
  {
    cout << "Peep Peep!!" << endl;
  }
};

// Derived class /child class
// single level inheritence
class Sedan : public Car1
{
public:
  string model = "Swift Dzire";
};
int main()
{
  Sedan s;
}