#ifndef WEREWOLF_H
#define WEREWOLF_H
#include "enemy.h"
using namespace std;

class Werewolf: public Enemy{
public:
	Werewolf(Cell* cell, bool shouldMove = false, char symbol = 'W', int HP = 120, \
		int maxHP = 120, int Atk = 30,  int Def = 5, \
		double gold = 0, Item* item = nullptr);
	~Werewolf();
};


#endif
