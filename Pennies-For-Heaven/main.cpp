#include <iostream>
using namespace std;

int main() {
  int dollars;
  int quarters;
  int dimes;
  int nickels;
  int pennies;
  cout << "How many pennies do you have? " << endl;
  cin >> pennies;
  dollars = pennies /100;
  cout << endl << "Dollars: " <<dollars <<endl;
  quarters = pennies % 100 / 25;
  cout <<"Quarters: " <<quarters <<endl;
  dimes = pennies % 100 % 25 / 10;
  cout <<"Dimes: " <<dimes <<endl;
  nickels = pennies % 100 % 25 % 10 / 5;
  cout <<"Nickels: "<<nickels <<endl;
  pennies = pennies % 100 % 25 % 10 % 5;
  cout <<"Pennies: "<<pennies <<endl;
}
