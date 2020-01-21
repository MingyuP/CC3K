#ifndef _COMPASS_H_
#define _COMPASS_H_

#include "major.h"

class Compass : public Major {
public:
    Compass();
    void usedBy(Orc &o) override;
    void usedBy(Elves &e) override;
    void usedBy(Dwarf &d) override;
    void usedBy(Human &h) override;
};

#endif
