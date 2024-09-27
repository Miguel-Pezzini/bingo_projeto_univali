#include "pokemons.h"

string pokemonName(int id) {
    switch (id) {
        case 1: return "Bulbasaur";
        case 2: return "Ivysaur";
        case 3: return "Venusaur";
        case 4: return "Charmander";
        case 5: return "Charmeleon";
        case 6: return "Charizard";
        case 7: return "Squirtle";
        case 8: return "Wartortle";
        case 9: return "Blastoise";
        case 10: return "Caterpie";
        case 11: return "Metapod";
        case 12: return "Butterfree";
        case 13: return "Weedle";
        case 14: return "Kakuna";
        case 15: return "Beedrill";
        case 16: return "Pidgey";
        case 17: return "Pidgeotto";
        case 18: return "Pidgeot";
        case 19: return "Rattata";
        case 20: return "Raticate";
        case 21: return "Spearow";
        case 22: return "Fearow";
        case 23: return "Ekans";
        case 24: return "Arbok";
        case 25: return "Pikachu";
        case 26: return "Raichu";
        case 27: return "Sandshrew";
        case 28: return "Sandslash";
        case 29: return "Nidoran♀";
        case 30: return "Nidorina";
        case 31: return "Nidoqueen";
        case 32: return "Nidoran♂";
        case 33: return "Nidorino";
        case 34: return "Nidoking";
        case 35: return "Clefairy";
        case 36: return "Clefable";
        case 37: return "Vulpix";
        case 38: return "Ninetales";
        case 39: return "Jigglypuff";
        case 40: return "Wigglytuff";
        case 41: return "Zubat";
        case 42: return "Golbat";
        case 43: return "Oddish";
        case 44: return "Gloom";
        case 45: return "Vileplume";
        case 46: return "Paras";
        case 47: return "Parasect";
        case 48: return "Venonat";
        case 49: return "Venomoth";
        case 50: return "Diglett";
        case 51: return "Dugtrio";
        case 52: return "Meowth";
        case 53: return "Persian";
        case 54: return "Psyduck";
        case 55: return "Golduck";
        case 56: return "Poliwag";
        case 57: return "Poliwhirl";
        case 58: return "Poliwrath";
        case 59: return "Abra";
        case 60: return "Kadabra";
        case 61: return "Alakazam";
        case 62: return "Machop";
        case 63: return "Machoke";
        case 64: return "Machamp";
        case 65: return "Bellsprout";
        case 66: return "Weepinbell";
        case 67: return "Victreebel";
        case 68: return "Tentacool";
        case 69: return "Tentacruel";
        case 70: return "Geodude";
        case 71: return "Graveler";
        case 72: return "Golem";
        case 73: return "Ponyta";
        case 74: return "Rapidash";
        case 75: return "Slowpoke";
        case 76: return "Slowbro";
        case 77: return "Magnemite";
        case 78: return "Magneton";
        case 79: return "Farfetch'd";
        case 80: return "Doduo";
        case 81: return "Dodrio";
        case 82: return "Seel";
        case 83: return "Dewgong";
        case 84: return "Grimer";
        case 85: return "Muk";
        case 86: return "Shellder";
        case 87: return "Cloyster";
        case 88: return "Gastly";
        case 89: return "Haunter";
        case 90: return "Gengar";
        case 91: return "Onix";
        case 92: return "Drowzee";
        case 93: return "Hypno";
        case 94: return "Krabby";
        case 95: return "Kingler";
        case 96: return "Voltorb";
        case 97: return "Electrode";
        case 98: return "Exeggcute";
        case 99: return "Exeggutor";
        case 100: return "Cubone";
        case 101: return "Marowak";
        case 102: return "Hitmonlee";
        case 103: return "Hitmonchan";
        case 104: return "Lickitung";
        case 105: return "Koffing";
        case 106: return "Weezing";
        case 107: return "Rhyhorn";
        case 108: return "Rhydon";
        case 109: return "Chansey";
        case 110: return "Tangela";
        case 111: return "Kangaskhan";
        case 112: return "Horsea";
        case 113: return "Seadra";
        case 114: return "Goldeen";
        case 115: return "Seaking";
        case 116: return "Staryu";
        case 117: return "Starmie";
        case 118: return "Mr. Mime";
        case 119: return "Scyther";
        case 120: return "Jynx";
        case 121: return "Electabuzz";
        case 122: return "Magmar";
        case 123: return "Pinsir";
        case 124: return "Tauros";
        case 125: return "Magikarp";
        case 126: return "Gyarados";
        case 127: return "Lapras";
        case 128: return "Ditto";
        case 129: return "Eevee";
        case 130: return "Vaporeon";
        case 131: return "Jolteon";
        case 132: return "Flareon";
        case 133: return "Porygon";
        case 134: return "Omanyte";
        case 135: return "Omastar";
        case 136: return "Kabuto";
        case 137: return "Kabutops";
        case 138: return "Aerodactyl";
        case 139: return "Snorlax";
        case 140: return "Articuno";
        case 141: return "Zapdos";
        case 142: return "Moltres";
        case 143: return "Dratini";
        case 144: return "Dragonair";
        case 145: return "Dragonite";
        case 146: return "Mewtwo";
        case 147: return "Mew";
        // Continue as necessary for additional Pokémon...
        default: return "Unknown Pokémon";
    }
}

int pokemonHP(int id, int level) {
    int baseHP;

    switch (id) {
        case 1:  baseHP = 45; break; // Bulbasaur
        case 2:  baseHP = 60; break; // Ivysaur
        case 3:  baseHP = 80; break; // Venusaur
        case 4:  baseHP = 39; break; // Charmander
        case 5:  baseHP = 58; break; // Charmeleon
        case 6:  baseHP = 78; break; // Charizard
        case 7:  baseHP = 44; break; // Squirtle
        case 8:  baseHP = 59; break; // Wartortle
        case 9:  baseHP = 79; break; // Blastoise
        case 10: baseHP = 45; break; // Caterpie
        case 11: baseHP = 50; break; // Metapod
        case 12: baseHP = 60; break; // Butterfree
        case 13: baseHP = 40; break; // Weedle
        case 14: baseHP = 45; break; // Kakuna
        case 15: baseHP = 65; break; // Beedrill
        case 16: baseHP = 40; break; // Pidgey
        case 17: baseHP = 63; break; // Pidgeotto
        case 18: baseHP = 83; break; // Pidgeot
        case 19: baseHP = 30; break; // Rattata
        case 20: baseHP = 55; break; // Raticate
        case 21: baseHP = 40; break; // Spearow
        case 22: baseHP = 65; break; // Fearow
        case 23: baseHP = 35; break; // Ekans
        case 24: baseHP = 60; break; // Arbok
        case 25: baseHP = 35; break; // Pikachu
        case 26: baseHP = 60; break; // Raichu
        case 27: baseHP = 50; break; // Sandshrew
        case 28: baseHP = 75; break; // Sandslash
        case 29: baseHP = 55; break; // Nidoran♀
        case 30: baseHP = 70; break; // Nidorina
        case 31: baseHP = 90; break; // Nidoqueen
        case 32: baseHP = 46; break; // Nidoran♂
        case 33: baseHP = 61; break; // Nidorino
        case 34: baseHP = 81; break; // Nidoking
        case 35: baseHP = 70; break; // Clefairy
        case 36: baseHP = 95; break; // Clefable
        case 37: baseHP = 38; break; // Vulpix
        case 38: baseHP = 73; break; // Ninetales
        case 39: baseHP = 115; break; // Jigglypuff
        case 40: baseHP = 140; break; // Wigglytuff
        case 41: baseHP = 40; break; // Zubat
        case 42: baseHP = 75; break; // Golbat
        case 43: baseHP = 45; break; // Oddish
        case 44: baseHP = 60; break; // Gloom
        case 45: baseHP = 75; break; // Vileplume
        case 46: baseHP = 35; break; // Paras
        case 47: baseHP = 60; break; // Parasect
        case 48: baseHP = 60; break; // Venonat
        case 49: baseHP = 70; break; // Venomoth
        case 50: baseHP = 10; break; // Diglett
        case 51: baseHP = 35; break; // Dugtrio
        case 52: baseHP = 40; break; // Meowth
        case 53: baseHP = 65; break; // Persian
        case 54: baseHP = 50; break; // Psyduck
        case 55: baseHP = 80; break; // Golduck
        case 56: baseHP = 50; break; // Poliwag
        case 57: baseHP = 65; break; // Poliwhirl
        case 58: baseHP = 90; break; // Poliwrath
        case 59: baseHP = 25; break; // Abra
        case 60: baseHP = 40; break; // Kadabra
        case 61: baseHP = 55; break; // Alakazam
        case 62: baseHP = 70; break; // Machop
        case 63: baseHP = 80; break; // Machoke
        case 64: baseHP = 90; break; // Machamp
        case 65: baseHP = 50; break; // Bellsprout
        case 66: baseHP = 65; break; // Weepinbell
        case 67: baseHP = 80; break; // Victreebel
        case 68: baseHP = 40; break; // Tentacool
        case 69: baseHP = 80; break; // Tentacruel
        case 70: baseHP = 40; break; // Geodude
        case 71: baseHP = 55; break; // Graveler
        case 72: baseHP = 80; break; // Golem
        case 73: baseHP = 50; break; // Ponyta
        case 74: baseHP = 65; break; // Rapidash
        case 75: baseHP = 90; break; // Slowpoke
        case 76: baseHP = 95; break; // Slowbro
        case 77: baseHP = 25; break; // Magnemite
        case 78: baseHP = 50; break; // Magneton
        case 79: baseHP = 52; break; // Farfetch'd
        case 80: baseHP = 35; break; // Doduo
        case 81: baseHP = 60; break; // Dodrio
        case 82: baseHP = 65; break; // Seel
        case 83: baseHP = 90; break; // Dewgong
        case 84: baseHP = 80; break; // Grimer
        case 85: baseHP = 105; break; // Muk
        case 86: baseHP = 30; break; // Shellder
        case 87: baseHP = 50; break; // Cloyster
        case 88: baseHP = 30; break; // Gastly
        case 89: baseHP = 45; break; // Haunter
        case 90: baseHP = 60; break; // Gengar
        case 91: baseHP = 35; break; // Onix
        case 92: baseHP = 60; break; // Drowzee
        case 93: baseHP = 80; break; // Hypno
        case 94: baseHP = 30; break; // Krabby
        case 95: baseHP = 55; break; // Kingler
        case 96: baseHP = 40; break; // Voltorb
        case 97: baseHP = 60; break; // Electrode
        case 98: baseHP = 60; break; // Exeggcute
        case 99: baseHP = 95; break; // Exeggutor
        case 100: baseHP = 50; break; // Cubone
        case 101: baseHP = 60; break; // Marowak
        case 102: baseHP = 50; break; // Hitmonlee
        case 103: baseHP = 50; break; // Hitmonchan
        case 104: baseHP = 90; break; // Lickitung
        case 105: baseHP = 40; break; // Koffing
        case 106: baseHP = 65; break; // Weezing
        case 107: baseHP = 80; break; // Rhyhorn
        case 108: baseHP = 105; break; // Rhydon
        case 109: baseHP = 250; break; // Chansey
        case 110: baseHP = 65; break; // Tangela
        case 111: baseHP = 105; break; // Kangaskhan
        case 112: baseHP = 30; break; // Horsea
        case 113: baseHP = 55; break; // Seadra
        case 114: baseHP = 45; break; // Goldeen
        case 115: baseHP = 80; break; // Seaking
        case 116: baseHP = 30; break; // Staryu
        case 117: baseHP = 60; break; // Starmie
        case 118: baseHP = 40; break; // Mr. Mime
        case 119: baseHP = 70; break; // Scyther
        case 120: baseHP = 65; break; // Jynx
        case 121: baseHP = 65; break; // Electabuzz
        case 122: baseHP = 65; break; // Magmar
        case 123: baseHP = 65; break; // Pinsir
        case 124: baseHP = 75; break; // Tauros
        case 125: baseHP = 20; break; // Magikarp
        case 126: baseHP = 95; break; // Gyarados
        case 127: baseHP = 130; break; // Lapras
        case 128: baseHP = 35; break; // Ditto
        case 129: baseHP = 55; break; // Eevee
        case 130: baseHP = 130; break; // Vaporeon
        case 131: baseHP = 65; break; // Jolteon
        case 132: baseHP = 65; break; // Flareon
        case 133: baseHP = 65; break; // Porygon
        case 134: baseHP = 35; break; // Omanyte
        case 135: baseHP = 70; break; // Omastar
        case 136: baseHP = 30; break; // Kabuto
        case 137: baseHP = 60; break; // Kabutops
        case 138: baseHP = 80; break; // Aerodactyl
        case 139: baseHP = 110; break; // Snorlax
        case 140: baseHP = 90; break; // Articuno
        case 141: baseHP = 90; break; // Zapdos
        case 142: baseHP = 90; break; // Moltres
        case 143: baseHP = 41; break; // Dratini
        case 144: baseHP = 61; break; // Dragonair
        case 145: baseHP = 91; break; // Dragonite
        case 146: baseHP = 106; break; // Mewtwo
        case 147: baseHP = 100; break; // Mew
        default: baseHP = 50; break; // Valor padrão
    }

    // Cálculo de HP (fórmula simplificada)
    return static_cast<int>((baseHP * 2 * level) / 100) + level + 10;
}

int pokemonDEF(int id, int level) {
    int baseDefense;

    switch (id) {
        case 1:  baseDefense = 49; break; // Bulbasaur
        case 2:  baseDefense = 63; break; // Ivysaur
        case 3:  baseDefense = 83; break; // Venusaur
        case 4:  baseDefense = 43; break; // Charmander
        case 5:  baseDefense = 58; break; // Charmeleon
        case 6:  baseDefense = 65; break; // Charizard
        case 7:  baseDefense = 48; break; // Squirtle
        case 8:  baseDefense = 65; break; // Wartortle
        case 9:  baseDefense = 80; break; // Blastoise
        case 10: baseDefense = 30; break; // Caterpie
        case 11: baseDefense = 55; break; // Metapod
        case 12: baseDefense = 50; break; // Butterfree
        case 13: baseDefense = 35; break; // Weedle
        case 14: baseDefense = 35; break; // Kakuna
        case 15: baseDefense = 80; break; // Beedrill
        case 16: baseDefense = 40; break; // Pidgey
        case 17: baseDefense = 55; break; // Pidgeotto
        case 18: baseDefense = 75; break; // Pidgeot
        case 19: baseDefense = 30; break; // Rattata
        case 20: baseDefense = 50; break; // Raticate
        case 21: baseDefense = 30; break; // Spearow
        case 22: baseDefense = 65; break; // Fearow
        case 23: baseDefense = 35; break; // Ekans
        case 24: baseDefense = 49; break; // Arbok
        case 25: baseDefense = 40; break; // Pikachu
        case 26: baseDefense = 50; break; // Raichu
        case 27: baseDefense = 75; break; // Sandshrew
        case 28: baseDefense = 100; break; // Sandslash
        case 29: baseDefense = 40; break; // Nidoran♀
        case 30: baseDefense = 55; break; // Nidorina
        case 31: baseDefense = 70; break; // Nidoqueen
        case 32: baseDefense = 40; break; // Nidoran♂
        case 33: baseDefense = 55; break; // Nidorino
        case 34: baseDefense = 80; break; // Nidoking
        case 35: baseDefense = 48; break; // Clefairy
        case 36: baseDefense = 70; break; // Clefable
        case 37: baseDefense = 40; break; // Vulpix
        case 38: baseDefense = 75; break; // Ninetales
        case 39: baseDefense = 30; break; // Jigglypuff
        case 40: baseDefense = 70; break; // Wigglytuff
        case 41: baseDefense = 45; break; // Zubat
        case 42: baseDefense = 70; break; // Golbat
        case 43: baseDefense = 55; break; // Oddish
        case 44: baseDefense = 50; break; // Gloom
        case 45: baseDefense = 70; break; // Vileplume
        case 46: baseDefense = 55; break; // Paras
        case 47: baseDefense = 60; break; // Parasect
        case 48: baseDefense = 50; break; // Venonat
        case 49: baseDefense = 60; break; // Venomoth
        case 50: baseDefense = 25; break; // Diglett
        case 51: baseDefense = 50; break; // Dugtrio
        case 52: baseDefense = 45; break; // Meowth
        case 53: baseDefense = 60; break; // Persian
        case 54: baseDefense = 50; break; // Psyduck
        case 55: baseDefense = 80; break; // Golduck
        case 56: baseDefense = 50; break; // Poliwag
        case 57: baseDefense = 65; break; // Poliwhirl
        case 58: baseDefense = 90; break; // Poliwrath
        case 59: baseDefense = 20; break; // Abra
        case 60: baseDefense = 25; break; // Kadabra
        case 61: baseDefense = 40; break; // Alakazam
        case 62: baseDefense = 70; break; // Machop
        case 63: baseDefense = 80; break; // Machoke
        case 64: baseDefense = 90; break; // Machamp
        case 65: baseDefense = 35; break; // Bellsprout
        case 66: baseDefense = 50; break; // Weepinbell
        case 67: baseDefense = 65; break; // Victreebel
        case 68: baseDefense = 40; break; // Tentacool
        case 69: baseDefense = 70; break; // Tentacruel
        case 70: baseDefense = 30; break; // Geodude
        case 71: baseDefense = 100; break; // Graveler
        case 72: baseDefense = 120; break; // Golem
        case 73: baseDefense = 55; break; // Ponyta
        case 74: baseDefense = 80; break; // Rapidash
        case 75: baseDefense = 65; break; // Slowpoke
        case 76: baseDefense = 80; break; // Slowbro
        case 77: baseDefense = 60; break; // Magnemite
        case 78: baseDefense = 95; break; // Magneton
        case 79: baseDefense = 50; break; // Farfetch'd
        case 80: baseDefense = 35; break; // Doduo
        case 81: baseDefense = 60; break; // Dodrio
        case 82: baseDefense = 85; break; // Seel
        case 83: baseDefense = 70; break; // Dewgong
        case 84: baseDefense = 50; break; // Grimer
        case 85: baseDefense = 75; break; // Muk
        case 86: baseDefense = 55; break; // Shellder
        case 87: baseDefense = 95; break; // Cloyster
        case 88: baseDefense = 30; break; // Gastly
        case 89: baseDefense = 45; break; // Haunter
        case 90: baseDefense = 60; break; // Gengar
        case 91: baseDefense = 160; break; // Onix
        case 92: baseDefense = 55; break; // Drowzee
        case 93: baseDefense = 70; break; // Hypno
        case 94: baseDefense = 50; break; // Krabby
        case 95: baseDefense = 75; break; // Kingler
        case 96: baseDefense = 40; break; // Voltorb
        case 97: baseDefense = 60; break; // Electrode
        case 98: baseDefense = 55; break; // Exeggcute
        case 99: baseDefense = 70; break; // Exeggutor
        case 100: baseDefense = 50; break; // Cubone
        case 101: baseDefense = 80; break; // Marowak
        case 102: baseDefense = 90; break; // Hitmonlee
        case 103: baseDefense = 110; break; // Hitmonchan
        case 104: baseDefense = 70; break; // Lickitung
        case 105: baseDefense = 70; break; // Koffing
        case 106: baseDefense = 120; break; // Weezing
        case 107: baseDefense = 95; break; // Rhyhorn
        case 108: baseDefense = 130; break; // Rhydon
        case 109: baseDefense = 30; break; // Chansey
        case 110: baseDefense = 60; break; // Tangela
        case 111: baseDefense = 80; break; // Kangaskhan
        case 112: baseDefense = 50; break; // Horsea
        case 113: baseDefense = 70; break; // Seadra
        case 114: baseDefense = 45; break; // Goldeen
        case 115: baseDefense = 70; break; // Seaking
        case 116: baseDefense = 30; break; // Staryu
        case 117: baseDefense = 60; break; // Starmie
        case 118: baseDefense = 70; break; // Mr. Mime
        case 119: baseDefense = 55; break; // Scyther
        case 120: baseDefense = 35; break; // Jynx
        case 121: baseDefense = 57; break; // Electabuzz
        case 122: baseDefense = 57; break; // Magmar
        case 123: baseDefense = 75; break; // Pinsir
        case 124: baseDefense = 75; break; // Tauros
        case 125: baseDefense = 20; break; // Magikarp
        case 126: baseDefense = 79; break; // Gyarados
        case 127: baseDefense = 85; break; // Lapras
        case 128: baseDefense = 70; break; // Ditto
        case 129: baseDefense = 50; break; // Eevee
        case 130: baseDefense = 60; break; // Vaporeon
        case 131: baseDefense = 65; break; // Jolteon
        case 132: baseDefense = 65; break; // Flareon
        case 133: baseDefense = 65; break; // Porygon
        case 134: baseDefense = 55; break; // Omanyte
        case 135: baseDefense = 70; break; // Omastar
        case 136: baseDefense = 55; break; // Kabuto
        case 137: baseDefense = 65; break; // Kabutops
        case 138: baseDefense = 60; break; // Aerodactyl
        case 139: baseDefense = 110; break; // Snorlax
        case 140: baseDefense = 100; break; // Articuno
        case 141: baseDefense = 90; break; // Zapdos
        case 142: baseDefense = 90; break; // Moltres
        case 143: baseDefense = 60; break; // Dratini
        case 144: baseDefense = 65; break; // Dragonair
        case 145: baseDefense = 95; break; // Dragonite
        case 146: baseDefense = 90; break; // Mewtwo
        case 147: baseDefense = 100; break; // Mew
        default: baseDefense = 50; break; // Valor padrão
    }

    // Cálculo de Defesa (fórmula simplificada)
    return static_cast<int>((baseDefense * 2 * level) / 100) + 5;
}

int pokemonXPTOUP(int level) {
    return level * 100;
}

int pokemonLevelToEvolve(int id) {
    switch (id) {
        case 1:  return 16;  // Bulbasaur
        case 2:  return 32;  // Ivysaur
        case 3:  return 0;   // Venusaur (não evolui)
        case 4:  return 16;  // Charmander
        case 5:  return 36;  // Charmeleon
        case 6:  return 0;   // Charizard (não evolui)
        case 7:  return 16;  // Squirtle
        case 8:  return 36;  // Wartortle
        case 9:  return 0;   // Blastoise (não evolui)
        case 10: return 7;   // Caterpie
        case 11: return 10;  // Metapod
        case 12: return 0;   // Butterfree (não evolui)
        case 13: return 7;   // Weedle
        case 14: return 10;  // Kakuna
        case 15: return 0;   // Beedrill (não evolui)
        case 16: return 18;  // Pidgey
        case 17: return 36;  // Pidgeotto
        case 18: return 0;   // Pidgeot (não evolui)
        case 19: return 20;  // Rattata
        case 20: return 0;   // Raticate (não evolui)
        case 21: return 20;  // Spearow
        case 22: return 0;   // Fearow (não evolui)
        case 23: return 22;  // Ekans
        case 24: return 0;   // Arbok (não evolui)
        case 25: return 16;  // Pikachu
        case 26: return 0;   // Raichu (não evolui)
        case 27: return 22;  // Sandshrew
        case 28: return 0;   // Sandslash (não evolui)
        case 29: return 16;  // Nidoran♀
        case 30: return 31;  // Nidorina
        case 31: return 0;   // Nidoqueen (não evolui)
        case 32: return 16;  // Nidoran♂
        case 33: return 31;  // Nidorino
        case 34: return 0;   // Nidoking (não evolui)
        case 35: return 35;  // Clefairy
        case 36: return 0;   // Clefable (não evolui)
        case 37: return 20;  // Vulpix
        case 38: return 0;   // Ninetales (não evolui)
        case 39: return 18;  // Jigglypuff
        case 40: return 0;   // Wigglytuff (não evolui)
        case 41: return 22;  // Zubat
        case 42: return 0;   // Golbat (não evolui)
        case 43: return 21;  // Oddish
        case 44: return 0;   // Gloom (não evolui)
        case 45: return 21;  // Vileplume
        case 46: return 24;  // Paras
        case 47: return 0;   // Parasect (não evolui)
        case 48: return 31;  // Venonat
        case 49: return 0;   // Venomoth (não evolui)
        case 50: return 26;  // Diglett
        case 51: return 0;   // Dugtrio (não evolui)
        case 52: return 28;  // Meowth
        case 53: return 0;   // Persian (não evolui)
        case 54: return 33;  // Psyduck
        case 55: return 0;   // Golduck (não evolui)
        case 56: return 25;  // Poliwag
        case 57: return 36;  // Poliwhirl
        case 58: return 0;   // Poliwrath (não evolui)
        case 59: return 16;  // Abra
        case 60: return 0;   // Kadabra (não evolui)
        case 61: return 0;   // Alakazam (não evolui)
        case 62: return 28;  // Machop
        case 63: return 35;  // Machoke
        case 64: return 0;   // Machamp (não evolui)
        case 65: return 21;  // Bellsprout
        case 66: return 35;  // Weepinbell
        case 67: return 0;   // Victreebel (não evolui)
        case 68: return 30;  // Tentacool
        case 69: return 0;   // Tentacruel (não evolui)
        case 70: return 25;  // Geodude
        case 71: return 0;   // Graveler (não evolui)
        case 72: return 0;   // Golem (não evolui)
        case 73: return 40;  // Ponyta
        case 74: return 0;   // Rapidash (não evolui)
        case 75: return 30;  // Slowpoke
        case 76: return 0;   // Slowbro (não evolui)
        case 77: return 30;  // Magnemite
        case 78: return 0;   // Magneton (não evolui)
        case 79: return 35;  // Farfetch'd
        case 80: return 0;   // Doduo (não evolui)
        case 81: return 0;   // Dodrio (não evolui)
        case 82: return 34;  // Seel
        case 83: return 0;   // Dewgong (não evolui)
        case 84: return 40;  // Grimer
        case 85: return 0;   // Muk (não evolui)
        case 86: return 30;  // Shellder
        case 87: return 0;   // Cloyster (não evolui)
        case 88: return 25;  // Gastly
        case 89: return 0;   // Haunter (não evolui)
        case 90: return 0;   // Gengar (não evolui)
        case 91: return 30;  // Onix
        case 92: return 0;   // Drowzee (não evolui)
        case 93: return 0;   // Hypno (não evolui)
        case 94: return 30;  // Krabby
        case 95: return 0;   // Kingler (não evolui)
        case 96: return 30;  // Voltorb
        case 97: return 0;   // Electrode (não evolui)
        case 98: return 0;   // Exeggcute (não evolui)
        case 99: return 0;   // Exeggutor (não evolui)
        case 100: return 28; // Cubone
        case 101: return 0;  // Marowak (não evolui)
        case 102: return 20; // Hitmonlee
        case 103: return 20; // Hitmonchan
        case 104: return 0;  // Lickitung (não evolui)
        case 105: return 0;  // Koffing (não evolui)
        case 106: return 0;  // Weezing (não evolui)
        case 107: return 42; // Rhyhorn
        case 108: return 0;  // Rhydon (não evolui)
        case 109: return 0;  // Chansey (não evolui)
        case 110: return 0;  // Tangela (não evolui)
        case 111: return 0;  // Kangaskhan (não evolui)
        case 112: return 32; // Horsea
        case 113: return 0;  // Seadra (não evolui)
        case 114: return 33; // Goldeen
        case 115: return 0;  // Seaking (não evolui)
        case 116: return 0;  // Staryu (não evolui)
        case 117: return 0;  // Starmie (não evolui)
        case 118: return 0;  // Mr. Mime (não evolui)
        case 119: return 0;  // Scyther (não evolui)
        case 120: return 0;  // Jynx (não evolui)
        case 121: return 0;  // Electabuzz (não evolui)
        case 122: return 0;  // Magmar (não evolui)
        case 123: return 0;  // Pinsir (não evolui)
        case 124: return 0;  // Tauros (não evolui)
        case 125: return 0;  // Magikarp (não evolui)
        case 126: return 20; // Gyarados
        case 127: return 0;  // Lapras (não evolui)
        case 128: return 0;  // Ditto (não evolui)
        case 129: return 0;  // Eevee (não evolui)
        case 130: return 0;  // Vaporeon (não evolui)
        case 131: return 0;  // Jolteon (não evolui)
        case 132: return 0;  // Flareon (não evolui)
        case 133: return 0;  // Porygon (não evolui)
        case 134: return 0;  // Omanyte (não evolui)
        case 135: return 0;  // Omastar (não evolui)
        case 136: return 0;  // Kabuto (não evolui)
        case 137: return 0;  // Kabutops (não evolui)
        case 138: return 0;  // Aerodactyl (não evolui)
        case 139: return 0;  // Snorlax (não evolui)
        case 140: return 0;  // Articuno (não evolui)
        case 141: return 0;  // Zapdos (não evolui)
        case 142: return 0;  // Moltres (não evolui)
        case 143: return 30; // Dratini
        case 144: return 0;  // Dragonair (não evolui)
        case 145: return 0;  // Dragonite (não evolui)
        case 146: return 0;  // Mewtwo (não evolui)
        case 147: return 0;  // Mew (não evolui)
        default: return 0;    // Valor padrão para IDs inválidos
    }
}

PokemonType pokemonType(int id) {
    switch (id) {
        case 1:  return PokemonType::Grass;     // Bulbasaur
        case 2:  return PokemonType::Grass;     // Ivysaur
        case 3:  return PokemonType::Grass;     // Venusaur
        case 4:  return PokemonType::Fire;      // Charmander
        case 5:  return PokemonType::Fire;      // Charmeleon
        case 6:  return PokemonType::Fire;      // Charizard
        case 7:  return PokemonType::Water;     // Squirtle
        case 8:  return PokemonType::Water;     // Wartortle
        case 9:  return PokemonType::Water;     // Blastoise
        case 10: return PokemonType::Bug;       // Caterpie
        case 11: return PokemonType::Bug;       // Metapod
        case 12: return PokemonType::Bug;       // Butterfree
        case 13: return PokemonType::Bug;       // Weedle
        case 14: return PokemonType::Bug;       // Kakuna
        case 15: return PokemonType::Bug;       // Beedrill
        case 16: return PokemonType::Normal;    // Pidgey
        case 17: return PokemonType::Normal;    // Pidgeotto
        case 18: return PokemonType::Normal;    // Pidgeot
        case 19: return PokemonType::Normal;    // Rattata
        case 20: return PokemonType::Normal;    // Raticate
        case 21: return PokemonType::Normal;    // Spearow
        case 22: return PokemonType::Normal;    // Fearow
        case 23: return PokemonType::Poison;    // Ekans
        case 24: return PokemonType::Poison;    // Arbok
        case 25: return PokemonType::Electric;  // Pikachu
        case 26: return PokemonType::Electric;  // Raichu
        case 27: return PokemonType::Ground;    // Sandshrew
        case 28: return PokemonType::Ground;    // Sandslash
        case 29: return PokemonType::Poison;    // Nidoran♀
        case 30: return PokemonType::Poison;    // Nidorina
        case 31: return PokemonType::Ground;    // Nidoqueen
        case 32: return PokemonType::Poison;    // Nidoran♂
        case 33: return PokemonType::Poison;    // Nidorino
        case 34: return PokemonType::Ground;    // Nidoking
        case 35: return PokemonType::Fairy;     // Clefairy
        case 36: return PokemonType::Fairy;     // Clefable
        case 37: return PokemonType::Fire;      // Vulpix
        case 38: return PokemonType::Fire;      // Ninetales
        case 39: return PokemonType::Normal;    // Jigglypuff
        case 40: return PokemonType::Fairy;     // Wigglytuff
        case 41: return PokemonType::Poison;    // Zubat
        case 42: return PokemonType::Poison;    // Golbat
        case 43: return PokemonType::Grass;     // Oddish
        case 44: return PokemonType::Grass;     // Gloom
        case 45: return PokemonType::Grass;     // Vileplume
        case 46: return PokemonType::Bug;       // Paras
        case 47: return PokemonType::Bug;       // Parasect
        case 48: return PokemonType::Bug;       // Venonat
        case 49: return PokemonType::Bug;       // Venomoth
        case 50: return PokemonType::Ground;    // Diglett
        case 51: return PokemonType::Ground;    // Dugtrio
        case 52: return PokemonType::Normal;    // Meowth
        case 53: return PokemonType::Normal;    // Persian
        case 54: return PokemonType::Water;     // Psyduck
        case 55: return PokemonType::Water;     // Golduck
        case 56: return PokemonType::Water;     // Poliwag
        case 57: return PokemonType::Water;     // Poliwhirl
        case 58: return PokemonType::Water;     // Poliwrath
        case 59: return PokemonType::Psychic;   // Abra
        case 60: return PokemonType::Psychic;   // Kadabra
        case 61: return PokemonType::Psychic;   // Alakazam
        case 62: return PokemonType::Fighting;  // Machop
        case 63: return PokemonType::Fighting;  // Machoke
        case 64: return PokemonType::Fighting;  // Machamp
        case 65: return PokemonType::Grass;     // Bellsprout
        case 66: return PokemonType::Grass;     // Weepinbell
        case 67: return PokemonType::Grass;     // Victreebel
        case 68: return PokemonType::Water;     // Tentacool
        case 69: return PokemonType::Water;     // Tentacruel
        case 70: return PokemonType::Rock;      // Geodude
        case 71: return PokemonType::Rock;      // Graveler
        case 72: return PokemonType::Rock;      // Golem
        case 73: return PokemonType::Fire;      // Ponyta
        case 74: return PokemonType::Fire;      // Rapidash
        case 75: return PokemonType::Water;     // Slowpoke
        case 76: return PokemonType::Water;     // Slowbro
        case 77: return PokemonType::Electric;  // Magnemite
        case 78: return PokemonType::Electric;  // Magneton
        case 79: return PokemonType::Normal;    // Farfetch'd
        case 80: return PokemonType::Normal;    // Doduo
        case 81: return PokemonType::Normal;    // Dodrio
        case 82: return PokemonType::Water;     // Seel
        case 83: return PokemonType::Water;     // Dewgong
        case 84: return PokemonType::Poison;    // Grimer
        case 85: return PokemonType::Poison;    // Muk
        case 86: return PokemonType::Water;     // Shellder
        case 87: return PokemonType::Water;     // Cloyster
        case 88: return PokemonType::Ghost;     // Gastly
        case 89: return PokemonType::Ghost;     // Haunter
        case 90: return PokemonType::Ghost;     // Gengar
        case 91: return PokemonType::Rock;      // Onix
        case 92: return PokemonType::Psychic;   // Drowzee
        case 93: return PokemonType::Psychic;   // Hypno
        case 94: return PokemonType::Water;     // Krabby
        case 95: return PokemonType::Water;     // Kingler
        case 96: return PokemonType::Electric;  // Voltorb
        case 97: return PokemonType::Electric;  // Electrode
        case 98: return PokemonType::Grass;     // Exeggcute
        case 99: return PokemonType::Grass;     // Exeggutor
        case 100: return PokemonType::Ground;   // Cubone
        case 101: return PokemonType::Ground;   // Marowak
        case 102: return PokemonType::Fighting;  // Hitmonlee
        case 103: return PokemonType::Fighting;  // Hitmonchan
        case 104: return PokemonType::Normal;    // Lickitung
        case 105: return PokemonType::Poison;    // Koffing
        case 106: return PokemonType::Poison;    // Weezing
        case 107: return PokemonType::Ground;   // Rhyhorn
        case 108: return PokemonType::Ground;   // Rhydon
        case 109: return PokemonType::Normal;    // Chansey
        case 110: return PokemonType::Grass;     // Tangela
        case 111: return PokemonType::Normal;    // Kangaskhan
        case 112: return PokemonType::Water;     // Horsea
        case 113: return PokemonType::Water;     // Seadra
        case 114: return PokemonType::Water;     // Goldeen
        case 115: return PokemonType::Water;     // Seaking
        case 116: return PokemonType::Water;     // Staryu
        case 117: return PokemonType::Water;     // Starmie
        case 118: return PokemonType::Psychic;   // Mr. Mime
        case 119: return PokemonType::Bug;       // Scyther
        case 120: return PokemonType::Ice;       // Jynx
        case 121: return PokemonType::Electric;  // Electabuzz
        case 122: return PokemonType::Fire;      // Magmar
        case 123: return PokemonType::Bug;       // Pinsir
        case 124: return PokemonType::Normal;    // Tauros
        case 125: return PokemonType::Water;     // Magikarp
        case 126: return PokemonType::Water;     // Gyarados
        case 127: return PokemonType::Water;     // Lapras
        case 128: return PokemonType::Normal;    // Ditto
        case 129: return PokemonType::Normal;    // Eevee
        case 130: return PokemonType::Water;     // Vaporeon
        case 131: return PokemonType::Electric;  // Jolteon
        case 132: return PokemonType::Fire;      // Flareon
        case 133: return PokemonType::Normal;    // Porygon
        case 134: return PokemonType::Rock;      // Omanyte
        case 135: return PokemonType::Rock;      // Omastar
        case 136: return PokemonType::Rock;      // Kabuto
        case 137: return PokemonType::Rock;      // Kabutops
        case 138: return PokemonType::Rock;      // Aerodactyl
        case 139: return PokemonType::Normal;    // Snorlax
        case 140: return PokemonType::Ice;       // Articuno
        case 141: return PokemonType::Electric;  // Zapdos
        case 142: return PokemonType::Fire;      // Moltres
        case 143: return PokemonType::Dragon;    // Dratini
        case 144: return PokemonType::Dragon;    // Dragonair
        case 145: return PokemonType::Dragon;    // Dragonite
        case 146: return PokemonType::Psychic;   // Mewtwo
        case 147: return PokemonType::Psychic;   // Mew
        default: return PokemonType::Normal;     // Valor padrão para IDs inválidos
    }
}

int pokemonEvolutionId(int id) {
    switch (id) {
        case 1:  return 2;   // Bulbasaur -> Ivysaur
        case 2:  return 3;   // Ivysaur -> Venusaur
        case 3:  return 0;   // Venusaur (não evolui)
        case 4:  return 5;   // Charmander -> Charmeleon
        case 5:  return 6;   // Charmeleon -> Charizard
        case 6:  return 0;   // Charizard (não evolui)
        case 7:  return 8;   // Squirtle -> Wartortle
        case 8:  return 9;   // Wartortle -> Blastoise
        case 9:  return 0;   // Blastoise (não evolui)
        case 10: return 11;  // Caterpie -> Metapod
        case 11: return 12;  // Metapod -> Butterfree
        case 12: return 0;   // Butterfree (não evolui)
        case 13: return 14;  // Weedle -> Kakuna
        case 14: return 15;  // Kakuna -> Beedrill
        case 15: return 0;   // Beedrill (não evolui)
        case 16: return 17;  // Pidgey -> Pidgeotto
        case 17: return 18;  // Pidgeotto -> Pidgeot
        case 18: return 0;   // Pidgeot (não evolui)
        case 19: return 20;  // Rattata -> Raticate
        case 20: return 0;   // Raticate (não evolui)
        case 21: return 22;  // Spearow -> Fearow
        case 22: return 0;   // Fearow (não evolui)
        case 23: return 24;  // Ekans -> Arbok
        case 24: return 0;   // Arbok (não evolui)
        case 25: return 26;  // Pikachu -> Raichu
        case 26: return 0;   // Raichu (não evolui)
        case 27: return 28;  // Sandshrew -> Sandslash
        case 28: return 0;   // Sandslash (não evolui)
        case 29: return 30;  // Nidoran♀ -> Nidorina
        case 30: return 31;  // Nidorina -> Nidoqueen
        case 31: return 0;   // Nidoqueen (não evolui)
        case 32: return 33;  // Nidoran♂ -> Nidorino
        case 33: return 34;  // Nidorino -> Nidoking
        case 34: return 0;   // Nidoking (não evolui)
        case 35: return 36;  // Clefairy -> Clefable
        case 36: return 0;   // Clefable (não evolui)
        case 37: return 38;  // Vulpix -> Ninetales
        case 38: return 0;   // Ninetales (não evolui)
        case 39: return 40;  // Jigglypuff -> Wigglytuff
        case 40: return 0;   // Wigglytuff (não evolui)
        case 41: return 42;  // Zubat -> Golbat
        case 42: return 0;   // Golbat (não evolui)
        case 43: return 44;  // Oddish -> Gloom
        case 44: return 45;  // Gloom -> Vileplume
        case 45: return 0;   // Vileplume (não evolui)
        case 46: return 47;  // Paras -> Parasect
        case 47: return 0;   // Parasect (não evolui)
        case 48: return 49;  // Venonat -> Venomoth
        case 49: return 0;   // Venomoth (não evolui)
        case 50: return 51;  // Diglett -> Dugtrio
        case 51: return 0;   // Dugtrio (não evolui)
        case 52: return 53;  // Meowth -> Persian
        case 53: return 0;   // Persian (não evolui)
        case 54: return 55;  // Psyduck -> Golduck
        case 55: return 0;   // Golduck (não evolui)
        case 56: return 57;  // Poliwag -> Poliwhirl
        case 57: return 58;  // Poliwhirl -> Poliwrath
        case 58: return 0;   // Poliwrath (não evolui)
        case 59: return 60;  // Abra -> Kadabra
        case 60: return 61;  // Kadabra -> Alakazam
        case 61: return 0;   // Alakazam (não evolui)
        case 62: return 63;  // Machop -> Machoke
        case 63: return 64;  // Machoke -> Machamp
        case 64: return 0;   // Machamp (não evolui)
        case 65: return 66;  // Bellsprout -> Weepinbell
        case 66: return 67;  // Weepinbell -> Victreebel
        case 67: return 0;   // Victreebel (não evolui)
        case 68: return 69;  // Tentacool -> Tentacruel
        case 69: return 0;   // Tentacruel (não evolui)
        case 70: return 71;  // Geodude -> Graveler
        case 71: return 72;  // Graveler -> Golem
        case 72: return 0;   // Golem (não evolui)
        case 73: return 74;  // Ponyta -> Rapidash
        case 74: return 0;   // Rapidash (não evolui)
        case 75: return 76;  // Slowpoke -> Slowbro
        case 76: return 0;   // Slowbro (não evolui)
        case 77: return 78;  // Magnemite -> Magneton
        case 78: return 0;   // Magneton (não evolui)
        case 79: return 0;   // Farfetch'd (não evolui)
        case 80: return 81;  // Doduo -> Dodrio
        case 81: return 0;   // Dodrio (não evolui)
        case 82: return 83;  // Seel -> Dewgong
        case 83: return 0;   // Dewgong (não evolui)
        case 84: return 85;  // Grimer -> Muk
        case 85: return 0;   // Muk (não evolui)
        case 86: return 87;  // Shellder -> Cloyster
        case 87: return 0;   // Cloyster (não evolui)
        case 88: return 89;  // Gastly -> Haunter
        case 89: return 90;  // Haunter -> Gengar
        case 90: return 0;   // Gengar (não evolui)
        case 91: return 0;   // Onix (não evolui)
        case 92: return 93;  // Drowzee -> Hypno
        case 93: return 0;   // Hypno (não evolui)
        case 94: return 95;  // Krabby -> Kingler
        case 95: return 0;   // Kingler (não evolui)
        case 96: return 97;  // Voltorb -> Electrode
        case 97: return 0;   // Electrode (não evolui)
        case 98: return 99;  // Exeggcute -> Exeggutor
        case 99: return 0;   // Exeggutor (não evolui)
        case 100: return 101; // Cubone -> Marowak
        case 101: return 0;   // Marowak (não evolui)
        case 102: return 0;   // Hitmonlee (não evolui)
        case 103: return 0;   // Hitmonchan (não evolui)
        case 104: return 0;   // Lickitung (não evolui)
        case 105: return 106; // Koffing -> Weezing
        case 106: return 0;   // Weezing (não evolui)
        case 107: return 108; // Rhyhorn -> Rhydon
        case 108: return 0;   // Rhydon (não evolui)
        case 109: return 0;   // Chansey (não evolui)
        case 110: return 0;   // Tangela (não evolui)
        case 111: return 0;   // Kangaskhan (não evolui)
        case 112: return 113; // Horsea -> Seadra
        case 113: return 0;   // Seadra (não evolui)
        case 114: return 115; // Goldeen -> Seaking
        case 115: return 0;   // Seaking (não evolui)
        case 116: return 117; // Staryu -> Starmie
        case 117: return 0;   // Starmie (não evolui)
        case 118: return 0;   // Mr. Mime (não evolui)
        case 119: return 0;   // Scyther (não evolui)
        case 120: return 0;   // Jynx (não evolui)
        case 121: return 0;   // Electabuzz (não evolui)
        case 122: return 0;   // Magmar (não evolui)
        case 123: return 0;   // Pinsir (não evolui)
        case 124: return 0;   // Tauros (não evolui)
        case 125: return 126; // Magikarp -> Gyarados
        case 126: return 0;   // Gyarados (não evolui)
        case 127: return 0;   // Lapras (não evolui)
        case 128: return 0;   // Ditto (não evolui)
        case 129: return 130; // Eevee -> Vaporeon
        case 130: return 0;   // Vaporeon (não evolui)
        case 131: return 0;   // Jolteon (não evolui)
        case 132: return 0;   // Flareon (não evolui)
        case 133: return 0;   // Porygon (não evolui)
        case 134: return 135; // Omanyte -> Omastar
        case 135: return 0;   // Omastar (não evolui)
        case 136: return 137; // Kabuto -> Kabutops
        case 137: return 0;   // Kabutops (não evolui)
        case 138: return 0;   // Aerodactyl (não evolui)
        case 139: return 0;   // Snorlax (não evolui)
        case 140: return 0;   // Articuno (não evolui)
        case 141: return 0;   // Zapdos (não evolui)
        case 142: return 0;   // Moltres (não evolui)
        case 143: return 144; // Dratini -> Dragonair
        case 144: return 145; // Dragonair -> Dragonite
        case 145: return 0;   // Dragonite (não evolui)
        case 146: return 0;   // Mewtwo (não evolui)
        case 147: return 0;   // Mew (não evolui)
        default: return 0;    // Pokémon não reconhecido
    }
}

int pokemonSPEED(int id, int level) {
    int baseSpeed;

    switch (id) {
        case 1:  baseSpeed = 45; break;  // Bulbasaur
        case 2:  baseSpeed = 60; break;  // Ivysaur
        case 3:  baseSpeed = 80; break;  // Venusaur
        case 4:  baseSpeed = 65; break;  // Charmander
        case 5:  baseSpeed = 80; break;  // Charmeleon
        case 6:  baseSpeed = 100; break; // Charizard
        case 7:  baseSpeed = 43; break;  // Squirtle
        case 8:  baseSpeed = 58; break;  // Wartortle
        case 9:  baseSpeed = 78; break;  // Blastoise
        case 10: baseSpeed = 45; break;  // Caterpie
        case 11: baseSpeed = 30; break;  // Metapod
        case 12: baseSpeed = 70; break;  // Butterfree
        case 13: baseSpeed = 40; break;  // Weedle
        case 14: baseSpeed = 35; break;  // Kakuna
        case 15: baseSpeed = 75; break;  // Beedrill
        case 16: baseSpeed = 56; break;  // Pidgey
        case 17: baseSpeed = 71; break;  // Pidgeotto
        case 18: baseSpeed = 91; break;  // Pidgeot
        case 19: baseSpeed = 72; break;  // Rattata
        case 20: baseSpeed = 95; break;  // Raticate
        case 21: baseSpeed = 60; break;  // Spearow
        case 22: baseSpeed = 100; break; // Fearow
        case 23: baseSpeed = 55; break;  // Ekans
        case 24: baseSpeed = 80; break;  // Arbok
        case 25: baseSpeed = 90; break;  // Pikachu
        case 26: baseSpeed = 110; break; // Raichu
        case 27: baseSpeed = 40; break;  // Sandshrew
        case 28: baseSpeed = 65; break;  // Sandslash
        case 29: baseSpeed = 45; break;  // Nidoran♀
        case 30: baseSpeed = 55; break;  // Nidorina
        case 31: baseSpeed = 76; break;  // Nidoqueen
        case 32: baseSpeed = 50; break;  // Nidoran♂
        case 33: baseSpeed = 65; break;  // Nidorino
        case 34: baseSpeed = 85; break;  // Nidoking
        case 35: baseSpeed = 35; break;  // Clefairy
        case 36: baseSpeed = 60; break;  // Clefable
        case 37: baseSpeed = 65; break;  // Vulpix
        case 38: baseSpeed = 100; break; // Ninetales
        case 39: baseSpeed = 45; break;  // Jigglypuff
        case 40: baseSpeed = 70; break;  // Wigglytuff
        case 41: baseSpeed = 55; break;  // Zubat
        case 42: baseSpeed = 90; break;  // Golbat
        case 43: baseSpeed = 55; break;  // Oddish
        case 44: baseSpeed = 60; break;  // Gloom
        case 45: baseSpeed = 75; break;  // Vileplume
        case 46: baseSpeed = 55; break;  // Paras
        case 47: baseSpeed = 60; break;  // Parasect
        case 48: baseSpeed = 45; break;  // Venonat
        case 49: baseSpeed = 70; break;  // Venomoth
        case 50: baseSpeed = 50; break;  // Diglett
        case 51: baseSpeed = 110; break; // Dugtrio
        case 52: baseSpeed = 90; break;  // Meowth
        case 53: baseSpeed = 115; break; // Persian
        case 54: baseSpeed = 50; break;  // Psyduck
        case 55: baseSpeed = 80; break;  // Golduck
        case 56: baseSpeed = 90; break;  // Poliwag
        case 57: baseSpeed = 65; break;  // Poliwhirl
        case 58: baseSpeed = 70; break;  // Poliwrath
        case 59: baseSpeed = 90; break;  // Abra
        case 60: baseSpeed = 105; break; // Kadabra
        case 61: baseSpeed = 120; break; // Alakazam
        case 62: baseSpeed = 70; break;  // Machop
        case 63: baseSpeed = 80; break;  // Machoke
        case 64: baseSpeed = 90; break;  // Machamp
        case 65: baseSpeed = 50; break;  // Bellsprout
        case 66: baseSpeed = 55; break;  // Weepinbell
        case 67: baseSpeed = 70; break;  // Victreebel
        case 68: baseSpeed = 55; break;  // Tentacool
        case 69: baseSpeed = 70; break;  // Tentacruel
        case 70: baseSpeed = 80; break;  // Geodude
        case 71: baseSpeed = 45; break;  // Graveler
        case 72: baseSpeed = 55; break;  // Golem
        case 73: baseSpeed = 60; break;  // Ponyta
        case 74: baseSpeed = 90; break;  // Rapidash
        case 75: baseSpeed = 15; break;  // Slowpoke
        case 76: baseSpeed = 30; break;  // Slowbro
        case 77: baseSpeed = 50; break;  // Magnemite
        case 78: baseSpeed = 70; break;  // Magneton
        case 79: baseSpeed = 60; break;  // Farfetch'd
        case 80: baseSpeed = 65; break;  // Doduo
        case 81: baseSpeed = 110; break; // Dodrio
        case 82: baseSpeed = 85; break;  // Seel
        case 83: baseSpeed = 70; break;  // Dewgong
        case 84: baseSpeed = 40; break;  // Grimer
        case 85: baseSpeed = 75; break;  // Muk
        case 86: baseSpeed = 40; break;  // Shellder
        case 87: baseSpeed = 70; break;  // Cloyster
        case 88: baseSpeed = 80; break;  // Gastly
        case 89: baseSpeed = 95; break;  // Haunter
        case 90: baseSpeed = 110; break; // Gengar
        case 91: baseSpeed = 70; break;  // Onix
        case 92: baseSpeed = 40; break;  // Drowzee
        case 93: baseSpeed = 70; break;  // Hypno
        case 94: baseSpeed = 25; break;  // Krabby
        case 95: baseSpeed = 50; break;  // Kingler
        case 96: baseSpeed = 100; break; // Voltorb
        case 97: baseSpeed = 140; break; // Electrode
        case 98: baseSpeed = 55; break;  // Exeggcute
        case 99: baseSpeed = 60; break;  // Exeggutor
        case 100: baseSpeed = 50; break; // Cubone
        case 101: baseSpeed = 80; break; // Marowak
        case 102: baseSpeed = 87; break; // Hitmonlee
        case 103: baseSpeed = 100; break; // Hitmonchan
        case 104: baseSpeed = 30; break; // Lickitung
        case 105: baseSpeed = 60; break; // Koffing
        case 106: baseSpeed = 60; break; // Weezing
        case 107: baseSpeed = 45; break; // Rhyhorn
        case 108: baseSpeed = 40; break; // Rhydon
        case 109: baseSpeed = 70; break; // Chansey
        case 110: baseSpeed = 55; break; // Tangela
        case 111: baseSpeed = 90; break; // Kangaskhan
        case 112: baseSpeed = 60; break; // Horsea
        case 113: baseSpeed = 65; break; // Seadra
        case 114: baseSpeed = 63; break; // Goldeen
        case 115: baseSpeed = 68; break; // Seaking
        case 116: baseSpeed = 50; break; // Staryu
        case 117: baseSpeed = 115; break; // Starmie
        case 118: baseSpeed = 60; break; // Mr. Mime
        case 119: baseSpeed = 105; break; // Scyther
        case 120: baseSpeed = 95; break; // Jynx
        case 121: baseSpeed = 87; break; // Electabuzz
        case 122: baseSpeed = 93; break; // Magmar
        case 123: baseSpeed = 85; break; // Pinsir
        case 124: baseSpeed = 100; break; // Tauros
        case 125: baseSpeed = 80; break; // Magikarp
        case 126: baseSpeed = 81; break; // Gyarados
        case 127: baseSpeed = 60; break; // Lapras
        case 128: baseSpeed = 48; break; // Ditto
        case 129: baseSpeed = 55; break; // Eevee
        case 130: baseSpeed = 65; break; // Vaporeon
        case 131: baseSpeed = 130; break; // Jolteon
        case 132: baseSpeed = 65; break; // Flareon
        case 133: baseSpeed = 60; break; // Porygon
        case 134: baseSpeed = 55; break; // Omanyte
        case 135: baseSpeed = 60; break; // Omastar
        case 136: baseSpeed = 55; break; // Kabuto
        case 137: baseSpeed = 80; break; // Kabutops
        case 138: baseSpeed = 130; break; // Aerodactyl
        case 139: baseSpeed = 30; break; // Snorlax
        case 140: baseSpeed = 100; break; // Articuno
        case 141: baseSpeed = 100; break; // Zapdos
        case 142: baseSpeed = 90; break; // Moltres
        case 143: baseSpeed = 60; break; // Dratini
        case 144: baseSpeed = 80; break; // Dragonair
        case 145: baseSpeed = 100; break; // Dragonite
        case 146: baseSpeed = 130; break; // Mewtwo
        case 147: baseSpeed = 100; break; // Mew
        default: baseSpeed = 50; break; // Valor padrão
    }

    // Cálculo de Velocidade (fórmula simplificada)
    return static_cast<int>((baseSpeed * 2 * level) / 100) + 5;
}

vector<Attack> pokemonAttacks(int id, int level) {
    vector<Attack> pokemonAttacks;
    PokemonType type = pokemonType(id);
    for(int i = 0; i < attacks.size(); i++) {
      if(pokemonAttacks.size() == 4) return pokemonAttacks;
      if(attacks[i].type == type) {
        if(attacks[i].levelToLearn < level) {
          pokemonAttacks.push_back(attacks[i]);
        }
      }
    }
    return pokemonAttacks;
}


Pokemon createPokemon(int id, int level) {
    Pokemon p;
    p.id = id;
    p.name = pokemonName(id);
    p.hp = pokemonHP(id, level);
    p.actualhp = p.hp;
    p.def = pokemonDEF(id, level);
    p.speed = pokemonSPEED(id, level);
    p.level = level;
    p.xp = 0;
    p.xpToUp = pokemonXPTOUP(level);
    p.levelToEvolve = pokemonLevelToEvolve(id);
    p.idEvolution = pokemonEvolutionId(id);
    p.type = pokemonType(id);
    p.attacks = pokemonAttacks(id, level);

    return p;
}