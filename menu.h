#ifndef MENU_H
#define MENU_H

#include "types.h"
#include "items.h"
#include "pokemons.h"
#include "attacks.h"

#include <vector>
#include <string>

using namespace std;

struct Character {
    string name;
    bool sex;
    vector<Pokemon> pokemons;
    vector<Item>bag;
    int money;
};

void showMenu();
void menu_out();
void menu_about();
void menuInGame(Character character);

#endif