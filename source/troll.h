#ifndef TROLL_H
#define TROLL_H
#include "enemy.h"
using namespace std;

class Troll: public Enemy{
public:
	Troll(Cell* cell, char symbol = 'T',int HP = 120, \
		int maxHP = 120, int Atk = 25,  int Def = 15, \
		double gold = 0, Item* item = nullptr);
	~Troll();
};


#endif
