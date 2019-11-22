#include <iostream>
#include <cmath>
#include "PokemonGym.h"

using namespace std;

//CREATING CLASS POKEMONGYM//

//Construct
PokemonGym::PokemonGym()
{
  this-> display_code= 'G';
  this-> state= NOT_BEATEN;
  this-> max_number_of_training_units=10;
  this-> num_training_units_remaining=max_number_of_training_units;
  this-> stamina_cost_per_training_unit=1;
  this-> dollar_cost_per_training_unit=1.0;
  this-> expierence_points_per_training_unit=2;
  cout << " PokemonGym default constructed" <<endl;
}

PokemonGym::PokemonGym(unsigned int max_training_units, unsigned int stamina_cost, double dollar_cost, unsigned int exp_points_per_unit, int in_id, Point2D in_loc)
{
  this-> id_num=in_id;
  this-> max_number_of_training_units=max_training_units;
  this-> stamina_cost_per_training_unit=stamina_cost;
  this-> expierence_points_per_training_unit=exp_points_per_unit;
  this-> dollar_cost_per_training_unit=dollar_cost;
  this->location=in_loc;
  cout << "PokemonGym Constructed" <<endl;
}

//Public Member Functions//
double PokemonGym::GetDollarCost(unsigned int unit_qty)
{
  unsigned int cost;
  cost = unit_qty *this->dollar_cost_per_training_unit;
  return cost;
}
  
unsigned int PokemonGym::GetStaminaCost(unsigned unit_qty)
{
   unsigned int cost;
   cost = unit_qty * this->stamina_cost_per_training_unit;
   return cost;
}

unsigned int PokemonGym::GetNumTrainingUnitsRemainig()
{
  return num_training_units_remaining;
}

bool PokemonGym::IsAbleToTrain(unsigned int unit_qty, double budget, unsigned int stamina)
{
  double dollar= unit_qty *this->dollar_cost_per_training_unit;

  unsigned int gstamina= unit_qty * this->stamina_cost_per_training_unit;

  if (budget >= dollar && stamina>=gstamina)
    return true;
  else 
    return false;
}

unsigned int PokemonGym::TrainPokemon(unsigned int training_units)
{
  if (num_training_units_remaining > training_units)
    {
      this->num_training_units_remaining=num_training_units_remaining-training_units;
      experience= training_units *this->expierence_points_per_training_unit;
    }
  else
    {
      experience = this->num_training_units_remaining *this->expierence_points_per_training_unit;
    }
  return experience;
}

bool PokemonGym::Update()
{
  if (num_training_units_remaining=0)
    {
      this-> state = BEATEN;
      this->display_code = 'g';
      this->id_num;
      
      cout << display_code << in_id << "has been beaten" << endl;
    }
  else
    {
      return false;
    }//// return true only once? how ? why? won't that just happen automatically?////////////////////
}

bool PokemonGym::IsBeaten()
{
  if (num_training_units_remaining=0)
    return true;
}

void PokemonGym::ShowStatus()
{
  cout << "Pokemon Gym Status: " <<endl;
  cout << Building:: ShowStatus() <<endl;;
  cout << "Max number of training units: " << max_number_of_training_units << endl;
  cout << "Stamina cost per training unit: " <<  stamina_cost_per_training_unit<< endl;
  cout << "Pokemon dollar per training unit: " << dollar_cost_per_training_unit <<endl;
  cout << "Experience points per training unit: " <<expierence_points_per_training_unit <<endl;
  cout <<  num_training_units_remaining<< "training unit(s) are remaining for this gym" <<endl;
}

