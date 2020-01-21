#ifndef _TREASURE_H_
#define _TREASURE_H_

#include "item.h"
#include "orc.h"
#include "elves.h"
#include "dwarf.h"
#include "human.h"
#include <string>

class Treasure : public Item {
    int gold;
    
public:
    Treasure(int g);
    ~Treasure() = 0;
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
};

#endif
