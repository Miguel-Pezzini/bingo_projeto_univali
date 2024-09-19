#ifndef POKEMONS_H
#define POKEMONS_H

#include "types.h" // Inclua types.h aqui
#include "attacks.h"
#include "items.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pokemon {
    int id;
    string name;
    int hp;
    int actualhp;
    int def;
    int level;
    int xpToUp;
    int xp;
    int levelToEvolve;
    int idEvolution;
    vector<Attack> attacks;
    PokemonType type;
};

Pokemon createPokemon(int id, int level);
// POKEMONS ID:

// 1. Bulbasaur
// 2. Ivysaur
// 3. Venusaur
// 4. Charmander
// 5. Charmeleon
// 6. Charizard
// 7. Squirtle
// 8. Wartortle
// 9. Blastoise
// 10. Caterpie
// 11. Metapod
// 12. Butterfree
// 13. Weedle
// 14. Kakuna
// 15. Beedrill
// 16. Pidgey
// 17. Pidgeotto
// 18. Pidgeot
// 19. Rattata
// 20. Raticate
// 21. Spearow
// 22. Fearow
// 23. Ekans
// 24. Arbok
// 25. Pikachu
// 26. Raichu
// 27. Sandshrew
// 28. Sandslash
// 29. Nidoran♀
// 30. Nidorina
// 31. Nidoqueen
// 32. Nidoran♂
// 33. Nidorino
// 34. Nidoking
// 35. Clefairy
// 36. Clefable
// 37. Vulpix
// 38. Ninetales
// 39. Jigglypuff
// 40. Wigglytuff
// 41. Zubat
// 42. Golbat
// 43. Oddish
// 44. Gloom
// 45. Vileplume
// 46. Paras
// 47. Parasect
// 48. Venonat
// 49. Venomoth
// 50. Diglett
// 51. Dugtrio
// 52. Meowth
// 53. Persian
// 54. Psyduck
// 55. Golduck
// 56. Poliwag
// 57. Poliwhirl
// 58. Poliwrath
// 59. Abra
// 60. Kadabra
// 61. Alakazam
// 62. Machop
// 63. Machoke
// 64. Machamp
// 65. Bellsprout
// 66. Weepinbell
// 67. Victreebel
// 68. Tentacool
// 69. Tentacruel
// 70. Geodude
// 71. Graveler
// 72. Golem
// 73. Ponyta
// 74. Rapidash
// 75. Slowpoke
// 76. Slowbro
// 77. Magnemite
// 78. Magneton
// 79. Farfetch'd
// 80. Doduo
// 81. Dodrio
// 82. Seel
// 83. Dewgong
// 84. Grimer
// 85. Muk
// 86. Shellder
// 87. Cloyster
// 88. Gastly
// 89. Haunter
// 90. Gengar
// 91. Onix
// 92. Drowzee
// 93. Hypno
// 94. Krabby
// 95. Kingler
// 96. Voltorb
// 97. Electrode
// 98. Exeggcute
// 99. Exeggutor
// 100. Cubone
// 101. Marowak
// 102. Hitmonlee
// 103. Hitmonchan
// 104. Lickitung
// 105. Koffing
// 106. Weezing
// 107. Rhyhorn
// 108. Rhydon
// 109. Chansey
// 110. Tangela
// 111. Kangaskhan
// 112. Horsea
// 113. Seadra
// 114. Goldeen
// 115. Seaking
// 116. Staryu
// 117. Starmie
// 118. Mr. Mime
// 119. Scyther
// 120. Jynx
// 121. Electabuzz
// 122. Magmar
// 123. Pinsir
// 124. Tauros
// 125. Magikarp
// 126. Gyarados
// 127. Lapras
// 128. Ditto
// 129. Eevee
// 130. Vaporeon
// 131. Jolteon
// 132. Flareon
// 133. Porygon
// 134. Omanyte
// 135. Omastar
// 136. Kabuto
// 137. Kabutops
// 138. Aerodactyl
// 139. Snorlax
// 140. Articuno
// 141. Zapdos
// 142. Moltres
// 143. Dratini
// 144. Dragonair
// 145. Dragonite
// 146. Mewtwo
// 147. Mew


#endif