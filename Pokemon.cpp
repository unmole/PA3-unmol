#include <iostream>
#include <cmath>
#include <string>
#include "Pokemon.h"

using namespace std;

//CREATING CLASS POKEMON

//Construce

Pokemon::Pokemon()
{
  this-> speed= 5;
  cout << "Pokemon default constructed" <<endl;
}

Pokemon::Pokemon(char in_code)
{
  this-> speed= 5;
  cout << "Pokemon constructed"<<endl;
  this-> state=STOPPED;
  this-> display_code= in_code;
}

Pokemon::Pokemon(string in_name, int in_id, char in_code, unsigned int in_speed, Point2D in_loc)
{
  this-> speed= in_speed;
  this-> name = in_name;
  cout << "Pokemon constructed" <<endl;
}

//Public Member Functions

void Pokemon::StartMoving(Point2D dest)
{
  
}

void Pokemon::StartMovingToCenter(PokemonCenter* center)
{

}

void Pokemon::StartMovingToGym(PokemonGym* gym)
{

}

void Pokemon::StartTraining(unsigned int num_training_units)
{

}

void Pokemon::StartRecoveringStamina(unsigned int num_stamina_points)
{

}

void Pokemon::Stop()
{

}

bool Pokemon::IsExhausted()
{

}

bool Pokemon::ShouldBeVisible()
{

}

bool Pokemon::ShowStatus()
{

}
   
bool Pokemon::Update()
{

}

//Protected member function 
bool UpdateLocation()
{

}

void SetupDestination(Point2D dest)
{

}

//Non-member(static) function
double GetRandomAmountofPokemonDollars()
{

}

