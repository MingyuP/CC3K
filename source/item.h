#ifndef _ITEM_H_
#define _ITEM_H_

#include "subject.h"
#include "cell.h"

class Orc;
class Elves;
class Dwarf;
class Human;
class Enemy;
class Character;

class Item : public Subject {
    char symbol;
    Cell *cell;

public:
    Item(char sym, Cell *c);
    virtual ~Item();
    char getSymbol() const;
    int getRow() const;
    int getCol() const;
    Cell *getCell() const;
    virtual void setEnemy(Character*);
    void setCell(Cell *c);
    virtual bool isMovable() const;
    virtual void usedBy(Orc &o) = 0;
    virtual void usedBy(Elves &e) = 0;
    virtual void usedBy(Dwarf &d) = 0;
    virtual void usedBy(Human &h) = 0;   
};

#endif
