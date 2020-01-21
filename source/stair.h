#ifndef _STAIR_H_
#define _STAIR_H_
#include "cell.h"

class Stair : public Cell {
  public:
    Stair(int row, int col, char symbol); // Constructor
    ~Stair(); // Destructor
    virtual char getSymbol() const override;
    bool isMovable(Player &player) const override;
    bool isStair() const override;
};

#endif
