#ifndef _PASSAGE_H_
#define _PASSAGE_H_
#include "cell.h"

class Passage : public Cell {
  public:
    Passage(int row, int col, char symbol); // Constructor
    ~Passage(); // Destructor
    bool isMovable(Player &player) const override;
};

#endif
