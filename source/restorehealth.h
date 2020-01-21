#ifndef _RESTOREHEALTH_H_
#define _RESTOREHEALTH_H_

#include "potion.h"

class RestoreHealth : public Potion {
public:
    RestoreHealth();
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
};

#endif
