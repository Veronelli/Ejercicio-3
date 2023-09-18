#include <iostream>
#include <util.h>

using namespace std;

int main(void) {
  const int MAX_KILOMETER_FUEL_STATION = 200;
  int carCapacity = 45;
  float currentyFuel;
  float carConsume;
  string message;

  cout << "Insert Current percent tank capacity: ";
  cin >> currentyFuel;

  cout << "Insert car consumation per kilometer: ";
  cin >> carConsume;

  const float currentFuelNumber = ((float)carCapacity * currentyFuel) / 100;
  const float fuelRequired = MAX_KILOMETER_FUEL_STATION * carConsume;
  const bool arriveToDestiny = fuelRequired > currentFuelNumber;

  if (arriveToDestiny)
    message = "Require more fuel";
  else
    message = "Enough fueld";
  cout << message << endl;
};
