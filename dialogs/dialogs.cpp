#include "dialogs.h"

#include <iostream>
#include <vector>

void dialogLabOne(Character &character, bool &firstTry) {
  int opt;
  (void)system("cls");
  if(firstTry) {
      cout<<"Hello, young adventurer! Welcome to my lab! I am Professor Silva. I am here to help you understand the wonderful world of Pokemon."<<endl;
      cout<<"The Pokemon world is fascinating! There are amazing creatures everywhere, each with its own abilities and characteristics. Some can fly, others can swim, and many have special powers!"<<endl;
      cout<<"To begin your journey, you will need a Pokemon. Here are three options:"<<endl;
      cout<<"OPTION 1 - Bulbasaur - A Grass-type Pokemon. It is gentle and loves nature. With it, you will learn about the power of plants!"<<endl;
      cout<<"OPTION 2 - Charmander - A Fire-type Pokemon. It is fearless and full of energy. With Charmander by your side, you will feel the heat of battle"<<endl;
      cout<<"OPTION 3 - Squirtle - A Water-type Pokemon. It is playful and loves to swim. If you choose Squirtle, you will become a true master of the waters!"<<endl;
      cin>>opt;
      switch (opt)
      {
        case 1:
          character.pokemons.push_back(createPokemon(1, 5)); // Bulbasaur level 5
          firstTry = false;
        break;
        case 2:
          character.pokemons.push_back(createPokemon(4, 5)); // Charmander level 5
          firstTry = false;
        break;
        case 3:
          character.pokemons.push_back(createPokemon(7, 5)); // Squirtle Level 5
          firstTry = false;
        break;
      default:
          cout<<"Please pick a pokemon!";
        break;
      }
  } else {
    cout<<"Go to your jorney through the world of pokemons!"<<endl;
    cout<<"PRESS 1 TO CANCEL";
    cin>>opt;
  }
}