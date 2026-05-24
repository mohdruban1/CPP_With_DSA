#include <bits/stdc++.h>
using namespace std;
// base class /parent class
class vehicle
{
public:
  string brand = "KIA";
  string color = "Red";
  int seats = 5;
};

// Derived class /child class
// single level inheritence
class Car : public vehicle
{
public:
  string type = "automatic";
};
//multilevel inheritence
class electricCar : public Car
{
public:
  int chargingTime = 7;
};
int main()
{
 electricCar ec1;
}