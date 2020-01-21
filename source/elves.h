#ifndef ELVES_H
#define ELVES_H
#include "player.h"
using namespace std;

class Elves: public Player{
public:
	Elves( Cell* cell, int HP = 140, \
		 int maxHP = 140,  int Atk = 30,  int Def = 10, \
		 double gold = 0,  int boostAtk = 0, \
		 int boostDef = 0,  bool hasBarrierSuit = false, char symbol = '@');
	~Elves();
	void use( Item* i) override;
};


#endif
