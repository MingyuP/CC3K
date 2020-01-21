#ifndef _BARRIERSUIT_H_
#define _BARRIERSUIT_H_

#include "major.h"
#include "invalidmove.h"
#include <stdexcept>

class Character;

class BarrierSuit : public Major {
    Character *dragon;
    
public:
    BarrierSuit(Enemy *d);
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
    virtual void setEnemy(Character *) override;
};

#endif
