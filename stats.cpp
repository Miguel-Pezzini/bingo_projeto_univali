#include <stats.h>

void upLvl(Pokemon pokemon, int fightXp) {
  pokemon.xpToUp = pokemon.xpToUp * 1.5;
  int xp = fightXp - pokemon.xp;
}