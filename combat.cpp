#include "combat.h"

std::vector<PokemonType> weakAgainst(PokemonType type) {
    switch (type) {
        case PokemonType::Grass:
            return { PokemonType::Fire, PokemonType::Bug, PokemonType::Flying, PokemonType::Ice, PokemonType::Poison };
        case PokemonType::Fire:
            return { PokemonType::Water, PokemonType::Ground, PokemonType::Rock };
        case PokemonType::Water:
            return { PokemonType::Electric, PokemonType::Grass };
        case PokemonType::Bug:
            return { PokemonType::Fire, PokemonType::Flying, PokemonType::Rock, PokemonType::Ghost, PokemonType::Fairy };
        case PokemonType::Normal:
            return { PokemonType::Fighting };
        case PokemonType::Poison:
            return { PokemonType::Ground, PokemonType::Psychic };
        case PokemonType::Electric:
            return { PokemonType::Ground }; // Electric é fraco contra Ground
        case PokemonType::Ground:
            return { PokemonType::Water, PokemonType::Ice, PokemonType::Grass };
        case PokemonType::Fighting:
            return { PokemonType::Psychic, PokemonType::Flying, PokemonType::Fairy };
        case PokemonType::Psychic:
            return { PokemonType::Bug, PokemonType::Ghost, PokemonType::Dark };
        case PokemonType::Rock:
            return { PokemonType::Fighting, PokemonType::Ground, PokemonType::Steel, PokemonType::Water, PokemonType::Grass };
        case PokemonType::Ice:
            return { PokemonType::Fighting, PokemonType::Rock, PokemonType::Steel, PokemonType::Fire };
        case PokemonType::Ghost:
            return { PokemonType::Ghost, PokemonType::Dark };
        case PokemonType::Dragon:
            return { PokemonType::Ice, PokemonType::Dragon, PokemonType::Fairy };
        case PokemonType::Fairy:
            return { PokemonType::Poison, PokemonType::Steel };
        // Adicione outros tipos conforme necessário
        default:
            return {}; // Para tipos desconhecidos
    }
}

std::vector<PokemonType> strongAgainst(PokemonType type) {
    switch (type) {
        case PokemonType::Grass:
            return { PokemonType::Water, PokemonType::Rock, PokemonType::Ground };
        case PokemonType::Fire:
            return { PokemonType::Grass, PokemonType::Bug, PokemonType::Ice };
        case PokemonType::Water:
            return { PokemonType::Fire, PokemonType::Rock, PokemonType::Ground };
        case PokemonType::Bug:
            return { PokemonType::Grass, PokemonType::Psychic, PokemonType::Dark };
        case PokemonType::Normal:
            return {}; // Normal não tem vantagens específicas
        case PokemonType::Poison:
            return { PokemonType::Grass, PokemonType::Fairy };
        case PokemonType::Electric:
            return { PokemonType::Water, PokemonType::Flying };
        case PokemonType::Ground:
            return { PokemonType::Electric }; // Ground é forte contra Electric
        case PokemonType::Fighting:
            return { PokemonType::Normal, PokemonType::Rock, PokemonType::Steel, PokemonType::Ice, PokemonType::Dark };
        case PokemonType::Psychic:
            return { PokemonType::Fighting, PokemonType::Poison };
        case PokemonType::Rock:
            return { PokemonType::Fire, PokemonType::Ice, PokemonType::Flying, PokemonType::Bug };
        case PokemonType::Ice:
            return { PokemonType::Grass, PokemonType::Ground, PokemonType::Flying, PokemonType::Dragon };
        case PokemonType::Ghost:
            return { PokemonType::Psychic, PokemonType::Ghost };
        case PokemonType::Dragon:
            return { PokemonType::Dragon };
        case PokemonType::Fairy:
            return { PokemonType::Fighting, PokemonType::Dragon, PokemonType::Dark };
        // Adicione outros tipos conforme necessário
        default:
            return {}; // Para tipos desconhecidos
    }
}

int menuCombat(Pokemon p) {
  int opt = 0;
  while(opt < 1 || opt > 4) {
    cout<<"What do you want to do: "<<endl;
    cout<<"1. Fight"<<endl;
    cout<<"2. Bag"<<endl;
    cout<<"3. Run"<<endl;
    cout<<"4. Pokemon"<<endl;
    cin>>opt;

    if (opt < 1 || opt > 4) {
      cout << "Invalid option. Please choose again." << endl;
    }
  }

  return opt;
}

bool checkPokemonDead(Character character) {
  int sumDead = 0;
  int size = character.pokemons.size();
  for(int i = 0; i < size; i++) {
    if(character.pokemons[i].actualhp <= 0) {
      sumDead++;
    }
  }

  if(sumDead == size) return false;

  return true;
}

void attackPokemon(Character character, Pokemon &p, int attackOpt) {
  float typeModifier = 1.0f;

  PokemonType attackType = character.pokemons[0].attacks[attackOpt].type;

  vector<PokemonType>strongTypeAgainst = strongAgainst(attackType);
  vector<PokemonType>weakTypeAgainst = weakAgainst(attackType);

  int strongSize = strongTypeAgainst.size();
  int weakSize = weakTypeAgainst.size();

  for(size_t i = 0; i < strongSize; i++) {
    if(p.type == strongTypeAgainst[i]) {
      typeModifier = 1.5f;
    }
  }

  for(size_t i = 0; i < weakSize; i++) {
    if(p.type == weakTypeAgainst[i]) {
      typeModifier = 0.5f;
    }
  }
  

  int dano = (((2 * p.level / 5 + 2) * character.pokemons[0].attacks[attackOpt].power * typeModifier * 50 / p.def) / 50) + 2;
  p.actualhp -= dano;
  if(p.actualhp <= 0) {
    p.actualhp = 0;
  }

  if(typeModifier == 1.5f) {
    cout<<character.pokemons[0].name<<" attack is effective doing "<<dano<<" of damage"<<endl;
  }
  if(typeModifier == 0.5f) {
    cout<<character.pokemons[0].name<<" attack is not effective doing "<<dano<<" of damage"<<endl;
  } 
  if(typeModifier == 1.0f) {
    cout<<character.pokemons[0].name<<" attack did "<<dano<<" of damage"<<endl;
  }
 };

void pokemonAttackYou(Character &character, Pokemon p, int randomAttack) {
  float typeModifier = 1.0f;

  PokemonType attackType = p.attacks[randomAttack].type;

  vector<PokemonType>strongTypeAgainst = strongAgainst(attackType);
  vector<PokemonType>weakTypeAgainst = weakAgainst(attackType);

  int strongSize = strongTypeAgainst.size();
  int weakSize = weakTypeAgainst.size();

  for(size_t i = 0; i < strongSize; i++) {
    if(character.pokemons[0].type == strongTypeAgainst[i]) {
      typeModifier = 1.5f;
    }
  }

  for(size_t i = 0; i < weakSize; i++) {
    if(character.pokemons[0].type == weakTypeAgainst[i]) {
      typeModifier = 0.5f;
    }
  }

  int dano = (((2 * character.pokemons[0].level / 5 + 2) * p.attacks[randomAttack].power * typeModifier * 50 / character.pokemons[0].def) / 50) + 2;
  character.pokemons[0].actualhp -= dano;

  if(character.pokemons[0].actualhp <= 0) {
    character.pokemons[0].actualhp = 0;
  }

  if(typeModifier == 1.5f) {
    cout<<p.name<<" attack is effective doing "<<dano<<" of damage"<<endl;
  }
  if(typeModifier == 0.5f) {
    cout<<p.name<<" attack is not effective doing "<<dano<<" of damage"<<endl;
  } else {
    cout<<p.name<<" attack did "<<dano<<" of damage"<<endl;
  }
};

void changePokemon(Character character) {
  int size = character.pokemons.size();
  int indexPoke = 0;
  cout<<"The Pokémon fainted! You must choose another Pokémon!: "<<endl;
  for(int i = 0; i < size; i++) {
    if(character.pokemons[i].actualhp > 0) {
      cout<<"PRESS "<<i<<" TO SELECT THE POKEMON "<<character.pokemons[i].name;
    }
  }
  cin>>indexPoke;
  Pokemon temp;
  temp = character.pokemons[0];
  character.pokemons[0] = character.pokemons[indexPoke];
  character.pokemons[indexPoke] = temp;
}

bool fight(Pokemon &p, Character &character) {
  int attackOpt = 0;
  int attacksWildLenght = p.attacks.size();
  int randomAttack = rand() % attacksWildLenght;

  cout<<"YOUR ATTACKS: \n";
  for(int i = 0; i < character.pokemons.size(); i++) {
    cout<<i + 1<<". "<<character.pokemons[0].attacks[i].name;
  }
  cin>>attackOpt;
  attackOpt--;
  
  if(character.pokemons[0].speed > p.speed) { // You faster
      attackPokemon(character, p, attackOpt);
    if(p.actualhp <= 0) return false;
    pokemonAttackYou(character, p, randomAttack);
    if(character.pokemons[0].actualhp <= 0) {
      if(!checkPokemonDead(character)) {
            return false;
      }
      changePokemon(character);
    }
    std::cout << "Press Enter to continue...";
    cin.get();
  }
  if(character.pokemons[0].speed < p.speed) { // Pokemon faster
    pokemonAttackYou(character, p, randomAttack);
    if(character.pokemons[0].actualhp <= 0) {
      if(!checkPokemonDead(character)) {
            return false;
      }
      changePokemon(character);
    }
    attackPokemon(character, p, attackOpt);
    std::cout << "Press Enter to continue...";
    cin.get();
    if(p.actualhp <= 0) return false;
  }
  return true;
}
bool seeBag(Pokemon p, Character character) {}
bool run(Pokemon p, Character character) {
  if(p.level > character.pokemons[0].level) {
    cout<<p.name<<" blocked your escape"<<endl;
    return true;
  }
  cout<<"Ran away safely!";
  return false;
}
void seePokemon(Character character) {}

bool inCombatInBush(Character &character, int route) {
    (void)system("cls");
    Route currentRoute;
    Pokemon p;

    int randomLevel = 0;
    int randomIds = 0;
    int idsSize = 0;
    int option = 0;
    switch(route) {
      case 1:
        currentRoute = RouteOne;
      break;
    }

    idsSize = currentRoute.ids.size();
    randomIds = rand() % idsSize;
    randomLevel = rand () % (currentRoute.levels[1] - currentRoute.levels[0] + 1) + currentRoute.levels[0];
    p = createPokemon(currentRoute.ids[randomIds], randomLevel);

    bool inCombat = true;

    cout<<"Wild "<<p.name<<" level: "<<p.level<<" appeared!"<<endl<<endl;
    while(inCombat) {
      option = menuCombat(p);
      cout<<p.name<<" HP: "<<p.actualhp<<"/"<<p.hp<<endl;
      cout<<character.pokemons[0].name<<" HP: "<<character.pokemons[0].actualhp<<"/"<<character.pokemons[0].hp;
      switch(option) {
        case 1:
          inCombat = fight(p, character);
          if(!checkPokemonDead(character)) {
            return true;
          }
        break;
        case 2:
          inCombat = seeBag(p, character);
        break;
        case 3:
          inCombat = run(p, character);
        break;
        case 4:
          seePokemon(character);
        break;
      }
    }

    return false;
}