#ifndef _POISONHEALTH_H_
#define _POISONHEALTH_H_

#include "potion.h"

class PoisonHealth : public Potion {
public:
    PoisonHealth();
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
};

#endif
