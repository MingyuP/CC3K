#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "enemy.h"
using namespace std;

class Vampire: public Enemy{
public:
	Vampire(Cell* cell,char symbol = 'V',int HP = 50, \
		int maxHP = 50,  int Atk = 25, int Def = 25, \
		double gold = 0, Item* item = nullptr);
	~Vampire();
};


#endif
