#ifndef GOBLIN_H
#define GOBLIN_H
#include "enemy.h"
using namespace std;

class Goblin: public Enemy{
public:
	Goblin( Cell* cell,  char symbol = 'N', int HP = 70, \
		 int maxHP = 70,  int Atk = 5,  int Def = 10, \
		 double gold = 0,  Item* item = nullptr);
	~Goblin();
};


#endif
