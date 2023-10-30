#include<iostream>
#include "Pokemon.h"

using namespace std;

// implement all the functions in the Pokemon class

// no main() in this file

// :: -> scope resolution operator

// default constructor will initialize the object to what we want it to have
Pokemon::Pokemon()
{
    _HP = 50;
    _attack = 10;
    _defense = 5;
    _max = 100;
    _speed = 0;
    _name = "empty";
}

void Pokemon::setHP(double HP)
{
    // update the _HP attribute in the class to what is passed in the parameter
    if(HP >= 0 && HP <=100)
    { 
        _HP = HP;
    }
}
void Pokemon::setAttack(int attack)
{
    _attack = attack;
}
void Pokemon::setSpeed(int speed)
{
    _speed = speed;
}
void Pokemon::setDefense(int defense)
{
    _defense = defense;
}
void Pokemon::setMax(int max)
{
    _max = max;
}
void Pokemon::setName(string name)
{
    _name = name;
}


double Pokemon::getHP() const
{
    // returns the value the getter is accessing
    // _HP = 10; // will be an error because of const
    return _HP;
}
int Pokemon::getAttack() const
{
    return _attack;
}
int Pokemon::getSpeed() const
{
    return _speed;
}
int Pokemon::getDefense() const
{
    return _defense;
}
int Pokemon::getMax() const
{
    return _max;
}
string Pokemon::getName() const
{
    return _name;
}