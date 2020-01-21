#ifndef _CHAMBER_H_
#define _CHAMBER_H_
#include <vector>

class Cell;
class Character;
class Item;

class Chamber {
    std::vector<Cell *> cells;

  public:
    Chamber(); // Constructor
    ~Chamber(); // Destructor

    // Getter
    std::vector<Cell *> getCells() const;

    // Other Methods
    void addCell(Cell *cellToAdd);
    void place(Character *charaToPlace);
    void place(Item *itemToPlace);
    Cell *chooseRandomCell(); // Returns a pointer to unoccupied empty cell
};

#endif
