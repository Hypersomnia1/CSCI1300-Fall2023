// at a minimum you need at least 3 files

// a program will only have 1 main()

// class definition -> ClassName.h

// pre-processor directive

// header guards to avoid redefinition error
// if there is no definition for Pokemon
#ifndef POKEMON_H
#define POKEMON_H

// class definition inside your header guards

#include<iostream>
using namespace std;

class Pokemon
{
    // access specifiers -> encapsulation
    public:
    // functions -> member functions -> inside a class
    // function prototypes

    // every attribute has at least 1 getter and 1 setter

    // setter or mutator -> updates/sets the atrribute value
    // most setters are void 
    void setHP(double); // void setHP(double HP);
    void setAttack(int);
    void setSpeed(int);
    void setDefense(int);
    void setMax(int);
    void setName(string);

    // getter or accessor -> acccesses/returns the value of an attribute
    // most getters returns something (matches the attribute data type) and takes no parameters

    double getHP() const;
    int getAttack() const;
    int getSpeed() const;
    int getDefense() const;
    int getMax() const;
    string getName() const;

    private:
    // variables -> data members/attributes/fields
    double _HP;
    int _attack;
    int _speed;
    int _defense;
    int _max;
    string _name;
};

#endif