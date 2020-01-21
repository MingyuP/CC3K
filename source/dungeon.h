#ifndef _DUNGEON_H_
#define _DUNGEON_H_
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

#include "subject.h"

#include "gamestate.h"
#include "direction.h"
#include "pctype.h"

#include "floor.h"

#include "player.h"
#include "human.h"
#include "elves.h"
#include "dwarf.h"
#include "orc.h"

class Dungeon : public Subject {
    Player *player;
    std::vector<Floor*> floors;
    int curLevel = 0;
    int maxLevel = 5;
    void nextFloor();
    GameState state;
    void initiateFloors();
    std::string pcRace;
  public:
    Dungeon(); // Constructor
    ~Dungeon(); // Destructor
    char getSymbol(int row, int col) const;
    GameState getState() const;
    void load(std::string fname);
    void loadDefault();
    void generate();
    void move(Direction dir);
    void use(Direction dir);
    void attack(Direction dir);
    void enemyMove();
    void setPlayer(PCType race);
    void restart();
    bool isOver() const;
    bool hasWon() const;
    std::string getPCRace() const;
    double getPCGold() const;
    double getPCScore() const;
    int getPCHP() const;
    int getPCAtk() const;
    int getPCDef() const;
    int getCurLevel() const;
};

#endif
