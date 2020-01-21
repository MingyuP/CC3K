#ifndef _FLOOR_H_
#define _FLOOR_H_
#include <vector>
#include <string>
#include <fstream>
#include <stdexcept>
#include <cstdlib>
#include <iostream>

#include "direction.h"
#include "invalidmove.h"

#include "cell.h"
#include "void.h"
#include "stair.h"
#include "wall.h"
#include "floortile.h"
#include "passage.h"
#include "door.h"

#include "chamber.h"

#include "character.h"
#include "enemy.h"
#include "player.h"
#include "item.h"
#include "major.h"
#include "treasure.h"
#include "potion.h"

#include "vampire.h"
#include "troll.h"
#include "werewolf.h"
#include "dragon.h"
#include "merchant.h"
#include "phoenix.h"
#include "goblin.h"

#include "compass.h"
#include "barriersuit.h"

#include "normal.h"
#include "smallhorde.h"
#include "merchanthoard.h"
#include "dragonhoard.h"

#include "restorehealth.h"
#include "poisonhealth.h"
#include "boostatk.h"
#include "woundatk.h"
#include "boostdef.h"
#include "wounddef.h"

class Player;
class Cell;
class Enemy;
class Item;
class Observer;
class Chamber;

class Floor {
    int level;
    std::vector<std::vector<Cell*>> cells;
    std::vector<Chamber*> chambers;
    std::vector<Enemy*> enemies;
    std::vector<Item*> items;
    Player *player = nullptr;
    Cell *stair = nullptr;
    std::vector<std::vector<char>> layout;
    int dragonNum = 0;
    bool hasBarrierSuit = false;
    bool isDefault = false;
    void placePlayer(int *);
    void placeStair(int);
    void placePotions();
    void placeGold();
    void placeEnemies();
    void placeCompass();
    void placeBarrierSuit();
    void initiateChambers();
    void attachNeighbours();
    void itemFix();
    Cell *chooseDirCell(Direction dir, Cell *input);

  public:

    Floor(int level, bool hasBarrierSuit); // Constructor
    ~Floor(); // Destructor

    // Getter
    int getLevel() const;
    bool getIsDefault() const;

    // Mutator
    void setPlayer(Player *other);
    void setLayout(std::vector<std::vector<char>> other);
    void setIsDefault(bool other);

    // Other Methods
    void loadDefault();
    void load();
    char getSymbol(int row, int col) const;
    void generate();
    void move(Direction dir);
    void use(Direction dir);
    void attack(Direction dir);
    void enemyMove();
    Chamber *getRandomChamber();
    Chamber *getRandomChamber(int *index);
    void makeStairVisible();
    void attachTD(Observer *);
};

#endif
