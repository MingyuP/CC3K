#ifndef _CELL_H_
#define _CELL_H_
#include <vector>

class Character;

class Item;
class Character;
class Cell;
class Enemy;
class Player;

class Cell {
  protected:
    char symbol;
    int row;
    int col;
    Item* item;
    Character* chara;
    std::vector<Cell *> neighbours;
    bool visible;
    int chamIndex = -1;
    bool getVisible() const;

  public:
    // Big 5 Operators
    Cell(int row, int col, char symbol); // Constructor
    virtual ~Cell() = 0; // Destructor (Pure Virtual)

    // Getters
    virtual char getSymbol() const;
    int getRow() const;
    int getCol() const;
    Item* getItem() const;
    Character* getChara() const;
    std::vector<Cell *> getNeighbours();
    int getIndex() const;

    // Mutators
    void setItem(Item *otherItem);
    void setChara(Character* otherChara);
    void setVisible(bool otherVisibility);
    void setIndex(int other);

    // Other Methods
    void addNeighbour(Cell* cell);
    virtual void spreadIndex(int index);
    virtual bool isMovable(Enemy &enemy) const;
    virtual bool isMovable(Player &player) const;
    virtual bool isGeneratable() const;
    virtual bool isStair() const;
    virtual bool isFloortile() const;
};

#endif
