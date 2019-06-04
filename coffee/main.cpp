#include <iostream>
#include <coffee_machines.hpp>

void print_coffee(adm::CoffeeMachine cmachine) {
  std::cout << "Cmachine water_level = " << cmachine.GetWaterLevel() << " ,coffee_level = " << cmachine.GetCoffeeLevel() << '\n';
}

void print_expresso(adm::ExpressoMachine expresso_machine) {
  std::cout << "Expresso Machine water_level = " << expresso_machine.GetWaterLevel() << " ,coffee_level = " << expresso_machine.GetCoffeeLevel() << " ,pressure_level = " << expresso_machine.GetPressureLevel() << '\n';
}

int main()
{
  adm::CoffeeMachine cmachine(3,3);

  print_coffee(cmachine);

  for (int i = 0;i < 20;i++) {
    cmachine.IncreaseCoffeeLevel();
    cmachine.IncreaseWaterLevel();
  }

  print_coffee(cmachine);


  adm::ExpressoMachine expresso_machine(4,4);

  expresso_machine.InitPressure();
  print_expresso(expresso_machine);

  expresso_machine.GetCoffee();
  print_expresso(expresso_machine);

  for (int i = 0;i < 20;i++) {
    expresso_machine.IncreaseCoffeeLevel();
    expresso_machine.IncreaseWaterLevel();
  }

  print_expresso(expresso_machine);

  return 0;
}

