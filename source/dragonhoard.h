#ifndef _DRAGONHOARD_H_
#define _DRAGONHOARD_H_

#include "treasure.h"
#include "invalidmove.h"
#include <stdexcept>

class Character;

class DragonHoard : public Treasure {
    Character *dragon;
public:
    DragonHoard(Enemy *d);
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
    virtual void setEnemy(Character *other) override;
};

#endif
