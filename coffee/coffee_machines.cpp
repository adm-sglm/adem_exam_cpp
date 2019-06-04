#include <coffee_machines.hpp>

namespace adm {
  CoffeeMachine::CoffeeMachine() {
    this->water_level = 0;
    this->coffee_level = 0;
  }
  CoffeeMachine::CoffeeMachine(int wlevel) {
    this->SetWaterLevel(wlevel);
    this->coffee_level = 0;
  }
  CoffeeMachine::CoffeeMachine(int wlevel,int clevel) {
    this->SetWaterLevel(wlevel);
    this->SetCoffeeLevel(clevel);
  }
  ExpressoMachine::ExpressoMachine() {
    this->water_level = 0;
    this->coffee_level = 0;
    this->pressure_level = 0;
  }
  ExpressoMachine::ExpressoMachine(int wlevel) {
    this->SetWaterLevel(wlevel);
    this->coffee_level = 0;
    this->pressure_level = 0;
  }
  ExpressoMachine::ExpressoMachine(int wlevel,int clevel) {
    this->SetWaterLevel(wlevel);
    this->SetCoffeeLevel(clevel);
    this->pressure_level = 0;
  }
  ExpressoMachine::ExpressoMachine(int wlevel,int clevel,int plevel) {
    this->SetWaterLevel(wlevel);
    this->SetCoffeeLevel(clevel);
    this->SetPressureLevel(plevel);
  }
  bool ExpressoMachine::GetCoffee() {
    if (this->water_level > 0 && this->coffee_level > 0) {
      this->SetWaterLevel(water_level--);
      this->SetCoffeeLevel(coffee_level--);
      this->pressure_level = 0;
      return true;
    } else {
      return false;
    }
  }
}
