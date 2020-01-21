#ifndef _WOUNDDEF_H_
#define _WOUNDDEF_H_

#include "potion.h"

class WoundDef : public Potion {
public:
    WoundDef();
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
};

#endif
