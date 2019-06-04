#ifndef COFFEE_MACHINES_HPP
#define COFFEE_MACHINES_HPP

namespace adm {
  class CoffeeMachine {
    public:
      CoffeeMachine();
      CoffeeMachine(int);
      CoffeeMachine(int,int);
      inline void IncreaseWaterLevel() {
        if (water_level < max_water_level) {
          water_level++;
        }
      }
      inline void IncreaseCoffeeLevel() {
        if (coffee_level < max_coffee_level) {
          coffee_level++;
        }
      }
      inline int GetWaterLevel() {
        return this->water_level;
      }
      inline void SetWaterLevel(int level) {
        if (water_level <= max_water_level) {
          this->water_level = level;
        }
      }
      inline int GetCoffeeLevel() {
        return this->coffee_level;
      }
      inline void SetCoffeeLevel(int level) {
        if (coffee_level <= max_coffee_level) {
          this->coffee_level = level;
        }
      }

    protected:
      int water_level = 0;
      int coffee_level = 0;
      static int const max_water_level = 10;
      static int const max_coffee_level = 10;

  };
  class ExpressoMachine : public CoffeeMachine {
    public:
      ExpressoMachine();
      ExpressoMachine(int);
      ExpressoMachine(int,int);
      ExpressoMachine(int,int,int);
      inline int GetPressureLevel() {
        return this->pressure_level;
      }
      inline void SetPressureLevel(int plevel) {
        if (plevel <= max_pressure_level) {
          this->pressure_level = plevel;
        }
      }
      inline void InitPressure() {
        this->SetPressureLevel(max_pressure_level);
      }
      bool GetCoffee();

    protected:
      int pressure_level = 0;
      static int const max_pressure_level = 10;
  };
}

#endif // COFFEE_MACHINES_HPP

