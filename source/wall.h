#ifndef _WALL_H_
#define _WALL_H_
#include "cell.h"

class Wall : public Cell {
  public:
    Wall(int row, int col, char symbol); // Constructor
    ~Wall(); // Destructor
};

#endif
