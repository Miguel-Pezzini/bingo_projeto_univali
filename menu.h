#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>

using namespace std;

enum PokemonType {
    Fire,
    Water,
    Grass,
    Electric,
    Psychic,
    Ice,
    Dragon,
    Fairy
};
struct Attack {
    string name;
    int power;
    int levelToLearn;
    PokemonType type;
};
struct Pokemon {
    int id;
    string name;
    int level;
    vector<Attack> attacks;
    PokemonType type;
};
struct Item {
    int id;
    string name;
    string type;
};
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