#ifndef PokemonGym_H_ 
#define PokemonGym_H_
#include <iostream>
#include <cmath>

using namespace std;

  enum PokemonGymStates
  {
    NOT_BEATEN=0,
    BEATEN=1
  };

class PokemonGym : public Building 
{
 private:
  unsigned int num_training_units_remaining;
  unsigned int max_number_of_training_units;
  unsigned int stamina_cost_per_training_unit;
  unsigned int dollar_cost_per_training_unit;
  unsigned int expierence_points_per_training_unit;
  PokemonGym();
  PokemonGym(unsigned int max_training_units, unsigned int stamina_cost, double dollar_cost, unsigned int exp_points_per_unit, int in_id, Point2D in_loc);

 public:;
  double GetDollarCost(unsigned int unit_qty);  
  unsigned int GetStaminaCost(unsigned unit_qty);
  unsigned int GetNumTrainingUnitsRemainig();
  bool IsAbleToTrain(unsigned int unit_qty, double budget, unsigned int stamina);
  unsigned int TrainPokemon(unsigned int training_units);
  bool Update();
  bool IsBeaten();
  void ShowStatus();
};
