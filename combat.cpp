#include "combat.h"

int menuCombat(Pokemon p) {
  int opt = 0;
  while(opt < 1 || opt > 4) {
    cout<<"Wild "<<p.name<<" level: "<<p.level<<" appeared!"<<endl<<endl;
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

bool fight(Pokemon p, Character character) {

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

void inCombat(Character character, int route) {
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
    while(inCombat) {
      option = menuCombat(p);
      switch(option) {
        case 1:
          inCombat = fight(p, character);
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
}