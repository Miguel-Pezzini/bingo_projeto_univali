#ifndef ATTACKS_H
#define ATTACKS_H

#include "types.h"
#include <string>
#include <vector>

using namespace std;

struct Attack {
    std::string name;
    int power;
    int accuracy;
    int levelToLearn;
    PokemonType type;

    Attack(std::string n, int p, int acc, int lvlToLearn, PokemonType t): name(n), power(p), accuracy(acc), levelToLearn(lvlToLearn), type(t) {};
};

extern vector<Attack> attacks;

#endif