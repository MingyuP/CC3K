#ifndef _BOOSTATK_H_
#define _BOOSTATK_H_

#include "potion.h"

class BoostAtk : public Potion {
public:
    BoostAtk();
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
};

#endif
