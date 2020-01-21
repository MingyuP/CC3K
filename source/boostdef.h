#ifndef _BOOSTDEF_H_
#define _BOOSTDEF_H_

#include "potion.h"

class BoostDef : public Potion {
public:
    BoostDef();
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
};

#endif
