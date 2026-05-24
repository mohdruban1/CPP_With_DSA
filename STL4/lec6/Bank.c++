#include <bits/stdc++.h>
using namespace std;

class Bank
{//privae data memember can be accessed inside the class
private:
  int income;

public:
  // setter function 
  void setIncome(int i)
  {
    income = i;
  }
  //getter function
  int getIncome(){
    return income;
  }
};
int main(){
  Bank b1;
  b1.setIncome(10000);
  cout<< b1.getIncome();
}
