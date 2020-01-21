#ifndef _DOOR_H_
#define _DOOR_H_
#include "cell.h"

class Door : public Cell {
  public:
    Door(int row, int col, char symbol); // Constructor
    ~Door(); // Destructor
    bool isMovable(Player &player) const override;
};

#endif
