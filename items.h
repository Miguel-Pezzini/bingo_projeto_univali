#ifndef ITEMS_H
#define ITEMS_H

#include "types.h"

#include <string>

//using namespace std;

struct Item {
    int id;
    std::string name;
    ItemType type;

    Item(int id, std::string n, ItemType t): id(id), name(n), type(t) {}
};

extern Item Pokeball;

#endif

// Healing Items:
// 1. Potion
// 2. Super Potion
// 3. Hyper Potion
// 4. Full Restore
// 5. Antidote
// 6. Paralyze Heal
// 7. Burn Heal
// 8. Ice Heal
// 9. Awakening
// 10. Full Heal

// Pokeballs:
// 11. Poké Ball
// 12. Great Ball
// 13. Ultra Ball
// 14. Master Ball
// 15. Safari Ball
// 16. Net Ball
// 17. Dive Ball
// 18. Dusk Ball
// 19. Repeat Ball

// Evolution Stones:
// 20. Fire Stone
// 21. Water Stone
// 22. Leaf Stone
// 23. Thunder Stone
// 24. Moon Stone

// StatBoosting:
// 25. X Attack
// 26. X Defense
// 27. X Speed
// 28. X Special
// 29. X Accuracy

// Utility:
// 30. Bicycle
// 31. Escape Rope
// 32. Repel
// 33. Max Repel

// Battle:
// 34. TM01 (Focus Punch)
// 35. TM02 (Dragon Claw)
// 36. HM01 (Cut)
// 37. HM02 (Fly)

// Equipable:
// 38. Berries (ex: Oran Berry)
// 39. Choice Band
// 40. Life Orb
// 41. Focus Sash
// 42. Leftovers
// 43. Quick Claw
// 44. Scope Lens
// 45. Muscle Band
// 46. Wise Glasses
// 47. Shell Bell
// 48. Sitrus Berry
