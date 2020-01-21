#ifndef _VOID_H_
#define _VOID_H_
#include "cell.h"

class Void : public Cell {
  public:
    Void(int row, int col, char symbol); // Constructor
    ~Void(); // Destructor
};

#endif
