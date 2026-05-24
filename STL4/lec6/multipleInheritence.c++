#include <bits/stdc++.h>
using namespace std;
class ElectricCar
{
public:
  int chargingTime = 7;
};
class petrolCar
{
public:
  int fuelCapacity = 60;
};
class hybridCar : public ElectricCar, public petrolCar
{
};
int main()
{
  hybridCar hc;
  cout << hc.chargingTime << " " << hc.fuelCapacity;
}