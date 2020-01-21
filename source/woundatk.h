#ifndef _WOUNDATK_H_
#define _WOUNDATK_H_

#include "potion.h"

class WoundAtk : public Potion {
public:
    WoundAtk();
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
};

#endif
