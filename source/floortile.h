#ifndef _FLOORTILE_H_
#define _FLOORTILE_H_
#include "cell.h"

class Floortile : public Cell {
  public:
    Floortile(int row, int col, char symbol); // Constructor
    ~Floortile(); // Destructor
    bool isMovable(Enemy &enemy) const override;
    bool isMovable(Player &player) const override;
    bool isGeneratable() const override;
    bool isFloortile() const override;
    void spreadIndex(int index) override;
};

#endif
